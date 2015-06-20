#!/usr/bin/env python
#
# @file    GlobalQueryFunctions.py
# @brief   class to create general functions
# @author  Frank Bergmann
# @author  Sarah Keating
#
# <!--------------------------------------------------------------------------
#
# Copyright (c) 2013-2014 by the California Institute of Technology
# (California, USA), the European Bioinformatics Institute (EMBL-EBI, UK)
# and the University of Heidelberg (Germany), with support from the National
# Institutes of Health (USA) under grant R01GM070923.  All rights reserved.
#
# Permission is hereby granted, free of charge, to any person obtaining a
# copy of this software and associated documentation files (the "Software"),
# to deal in the Software without restriction, including without limitation
# the rights to use, copy, modify, merge, publish, distribute, sublicense,
# and/or sell copies of the Software, and to permit persons to whom the
# Software is furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
# THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
# FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
# DEALINGS IN THE SOFTWARE.
#
# Neither the name of the California Institute of Technology (Caltech), nor
# of the European Bioinformatics Institute (EMBL-EBI), nor of the University
# of Heidelberg, nor the names of any contributors, may be used to endorse
# or promote products derived from this software without specific prior
# written permission.
# ------------------------------------------------------------------------ -->

from util import strFunctions


class GlobalQueryFunctions():
    """Class for general functions"""

    def __init__(self, language, is_cpp_api, is_list_of, class_object):
        self.language = language
        self.package = class_object['package']
        self.class_name = class_object['name']
        self.is_cpp_api = is_cpp_api
        self.is_list_of = is_list_of
        if is_list_of:
            self.child_name = class_object['lo_child']
        else:
            self.child_name = ''
        if is_cpp_api:
            self.object_name = self.class_name
            self.object_child_name = self.child_name
        else:
            if is_list_of:
                self.object_name = 'ListOf_t'
            else:
                self.object_name = self.class_name + '_t'
            self.object_child_name = self.child_name + '_t'

        self.typecode = class_object['typecode']
        self.attributes = class_object['class_attributes']
        self.sid_refs = class_object['sid_refs']
        self.child_lo_elements = class_object['child_lo_elements']
        self.child_elements = class_object['child_elements']

        # check case of things where we assume upper/lower
        if self.package[0].islower():
            self.package = strFunctions.upper_first(class_object['package'])

        # useful variables
        if not self.is_cpp_api and self.is_list_of:
            self.struct_name = self.object_child_name
        else:
            self.struct_name = self.object_name
        self.abbrev_parent = strFunctions.abbrev_name(self.object_name)
        if self.is_cpp_api is False:
            self.true = '@c 1'
            self.false = '@c 0'
        else:
            self.true = '@c true'
            self.false = '@c false'
        self.no_children = \
            len(self.child_elements) + len(self.child_lo_elements)

    ########################################################################

    # Function for writing function to retrieve elements

    # function to write get by sid
    def write_get_by_sid(self):
        # only write for elements with children in cpp
        if not self.is_cpp_api or self.no_children == 0:
                return

        # create comment parts
        title_line = 'Returns the first child element that has the given ' \
                     '@p id in the model-wide SId namespace, or @c NULL if ' \
                     'no such object is found.'
        params = ['@param id a string representing the id attribute '
                  'of the object to retrieve.']
        return_lines = ['@return  a pointer to the SBase element with the '
                        'given @p id.']
        additional = []

        # create the function declaration
        function = 'getElementBySId'
        return_type = 'SBase*'
        arguments = ['const std::string& id']

        # return the parts
        return dict({'title_line': title_line,
                     'params': params,
                     'return_lines': return_lines,
                     'additional': additional,
                     'function': function,
                     'return_type': return_type,
                     'arguments': arguments,
                     'constant': False,
                     'virtual': True,
                     'object_name': self.struct_name})

    # function to write get by metaid
    def write_get_by_metaid(self):
        # only write for elements with children in cpp
        if not self.is_cpp_api or self.no_children == 0:
                return

        # create comment parts
        title_line = 'Returns the first child element that has the given ' \
                     '@p metaid, or @c NULL if ' \
                     'no such object is found.'
        params = ['@param metaid a string representing the metaid attribute '
                  'of the object to retrieve.']
        return_lines = ['@return  a pointer to the SBase element with the '
                        'given @p metaid.']
        additional = []

        # create the function declaration
        function = 'getElementByMetaId'
        return_type = 'SBase*'
        arguments = ['const std::string& metaid']

        # return the parts
        return dict({'title_line': title_line,
                     'params': params,
                     'return_lines': return_lines,
                     'additional': additional,
                     'function': function,
                     'return_type': return_type,
                     'arguments': arguments,
                     'constant': False,
                     'virtual': True,
                     'object_name': self.struct_name})

    # function to write get all elements
    def write_get_all_elements(self):
        # only write for elements with children in cpp
        if not self.is_cpp_api or self.no_children == 0:
                return

        # create comment parts
        title_line = 'Returns a List of all child SBase objects, including ' \
                     'those nested to an arbitrary depth.'
        params = ['filter, an ElementFilter that may impose restrictions on '
                  'the objects to be retrieved.']
        return_lines = ['@return  a List* pointer of pointers to all '
                        'SBase child objects with any restriction imposed.']
        additional = []

        # create the function declaration
        function = 'getAllElements'
        return_type = 'List*'
        arguments = ['ElementFilter * filter = NULL']

        # return the parts
        return dict({'title_line': title_line,
                     'params': params,
                     'return_lines': return_lines,
                     'additional': additional,
                     'function': function,
                     'return_type': return_type,
                     'arguments': arguments,
                     'constant': False,
                     'virtual': True,
                     'object_name': self.struct_name})