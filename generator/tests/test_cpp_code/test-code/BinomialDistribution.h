/**
 * @file BinomialDistribution.h
 * @brief Definition of the BinomialDistribution class.
 * @author SBMLTeam
 *
 * <!--------------------------------------------------------------------------
 * This file is part of libSBML. Please visit http://sbml.org for more
 * information about SBML, and the latest version of libSBML.
 *
 * Copyright (C) 2013-2017 jointly by the following organizations:
 * 1. California Institute of Technology, Pasadena, CA, USA
 * 2. EMBL European Bioinformatics Institute (EMBL-EBI), Hinxton, UK
 * 3. University of Heidelberg, Heidelberg, Germany
 *
 * Copyright (C) 2009-2013 jointly by the following organizations:
 * 1. California Institute of Technology, Pasadena, CA, USA
 * 2. EMBL European Bioinformatics Institute (EMBL-EBI), Hinxton, UK
 *
 * Copyright (C) 2006-2008 by the California Institute of Technology,
 * Pasadena, CA, USA
 *
 * Copyright (C) 2002-2005 jointly by the following organizations:
 * 1. California Institute of Technology, Pasadena, CA, USA
 * 2. Japan Science and Technology Agency, Japan
 *
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by the
 * Free Software Foundation. A copy of the license agreement is provided in the
 * file named "LICENSE.txt" included with this software distribution and also
 * available online as http://sbml.org/software/libsbml/license.html
 * ------------------------------------------------------------------------ -->
 *
 * @class BinomialDistribution
 * @sbmlbrief{distrib} TODO:Definition of the BinomialDistribution class.
 */


#ifndef BinomialDistribution_H__
#define BinomialDistribution_H__


#include <sbml/common/extern.h>
#include <sbml/common/sbmlfwd.h>
#include <sbml/packages/distrib/common/distribfwd.h>


#ifdef __cplusplus


#include <string>


#include <sbml/packages/distrib/sbml/DiscreteUnivariateDistribution.h>
#include <sbml/packages/distrib/extension/DistribExtension.h>
#include <sbml/packages/distrib/sbml/UncertValue.h>


LIBSBML_CPP_NAMESPACE_BEGIN


class LIBSBML_EXTERN BinomialDistribution : public
  DiscreteUnivariateDistribution
{
protected:

  /** @cond doxygenLibsbmlInternal */

  UncertValue* mNumberOfTrials;
  UncertValue* mProbabilityOfSuccess;

  /** @endcond */

public:

  /**
   * Creates a new BinomialDistribution using the given SBML Level, Version and
   * &ldquo;distrib&rdquo; package version.
   *
   * @param level an unsigned int, the SBML Level to assign to this
   * BinomialDistribution.
   *
   * @param version an unsigned int, the SBML Version to assign to this
   * BinomialDistribution.
   *
   * @param pkgVersion an unsigned int, the SBML Distrib Version to assign to
   * this BinomialDistribution.
   *
   * @copydetails doc_note_setting_lv_pkg
   */
  BinomialDistribution(unsigned int level =
    DistribExtension::getDefaultLevel(),
                       unsigned int version =
                         DistribExtension::getDefaultVersion(),
                       unsigned int pkgVersion =
                         DistribExtension::getDefaultPackageVersion());


  /**
   * Creates a new BinomialDistribution using the given DistribPkgNamespaces
   * object.
   *
   * @copydetails doc_what_are_sbml_package_namespaces
   *
   * @param distribns the DistribPkgNamespaces object.
   *
   * @copydetails doc_note_setting_lv_pkg
   */
  BinomialDistribution(DistribPkgNamespaces *distribns);


  /**
   * Copy constructor for BinomialDistribution.
   *
   * @param orig the BinomialDistribution instance to copy.
   */
  BinomialDistribution(const BinomialDistribution& orig);


  /**
   * Assignment operator for BinomialDistribution.
   *
   * @param rhs the BinomialDistribution object whose values are to be used as
   * the basis of the assignment.
   */
  BinomialDistribution& operator=(const BinomialDistribution& rhs);


  /**
   * Creates and returns a deep copy of this BinomialDistribution object.
   *
   * @return a (deep) copy of this BinomialDistribution object.
   */
  virtual BinomialDistribution* clone() const;


  /**
   * Destructor for BinomialDistribution.
   */
  virtual ~BinomialDistribution();


  /**
   * Returns the value of the "numberOfTrials" element of this
   * BinomialDistribution.
   *
   * @return the value of the "numberOfTrials" element of this
   * BinomialDistribution as a UncertValue*.
   */
  const UncertValue* getNumberOfTrials() const;


  /**
   * Returns the value of the "numberOfTrials" element of this
   * BinomialDistribution.
   *
   * @return the value of the "numberOfTrials" element of this
   * BinomialDistribution as a UncertValue*.
   */
  UncertValue* getNumberOfTrials();


  /**
   * Returns the value of the "probabilityOfSuccess" element of this
   * BinomialDistribution.
   *
   * @return the value of the "probabilityOfSuccess" element of this
   * BinomialDistribution as a UncertValue*.
   */
  const UncertValue* getProbabilityOfSuccess() const;


  /**
   * Returns the value of the "probabilityOfSuccess" element of this
   * BinomialDistribution.
   *
   * @return the value of the "probabilityOfSuccess" element of this
   * BinomialDistribution as a UncertValue*.
   */
  UncertValue* getProbabilityOfSuccess();


  /**
   * Predicate returning @c true if this BinomialDistribution's
   * "numberOfTrials" element is set.
   *
   * @return @c true if this BinomialDistribution's "numberOfTrials" element
   * has been set, otherwise @c false is returned.
   */
  bool isSetNumberOfTrials() const;


  /**
   * Predicate returning @c true if this BinomialDistribution's
   * "probabilityOfSuccess" element is set.
   *
   * @return @c true if this BinomialDistribution's "probabilityOfSuccess"
   * element has been set, otherwise @c false is returned.
   */
  bool isSetProbabilityOfSuccess() const;


  /**
   * Sets the value of the "numberOfTrials" element of this
   * BinomialDistribution.
   *
   * @param numberOfTrials UncertValue* value of the "numberOfTrials" element
   * to be set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE,
   * OperationReturnValues_t}
   */
  int setNumberOfTrials(const UncertValue* numberOfTrials);


  /**
   * Sets the value of the "probabilityOfSuccess" element of this
   * BinomialDistribution.
   *
   * @param probabilityOfSuccess UncertValue* value of the
   * "probabilityOfSuccess" element to be set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE,
   * OperationReturnValues_t}
   */
  int setProbabilityOfSuccess(const UncertValue* probabilityOfSuccess);


  /**
   * Creates a new UncertValue object, adds it to this BinomialDistribution
   * object and returns the UncertValue object created.
   *
   * @return a new UncertValue object instance.
   */
  UncertValue* createNumberOfTrials();


  /**
   * Creates a new UncertValue object, adds it to this BinomialDistribution
   * object and returns the UncertValue object created.
   *
   * @return a new UncertValue object instance.
   */
  UncertValue* createProbabilityOfSuccess();


  /**
   * Unsets the value of the "numberOfTrials" element of this
   * BinomialDistribution.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  int unsetNumberOfTrials();


  /**
   * Unsets the value of the "probabilityOfSuccess" element of this
   * BinomialDistribution.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  int unsetProbabilityOfSuccess();


  /**
   * Returns the XML element name of this BinomialDistribution object.
   *
   * For BinomialDistribution, the XML element name is always
   * @c "binomialDistribution".
   *
   * @return the name of this element, i.e. @c "binomialDistribution".
   */
  virtual const std::string& getElementName() const;


  /**
   * Returns the libSBML type code for this BinomialDistribution object.
   *
   * @copydetails doc_what_are_typecodes
   *
   * @return the SBML type code for this object:
   * @sbmlconstant{SBML_DISTRIB_BINOMIALDISTRIBUTION, SBMLDistribTypeCode_t}.
   *
   * @copydetails doc_warning_typecodes_not_unique
   *
   * @see getElementName()
   * @see getPackageName()
   */
  virtual int getTypeCode() const;


  /**
   * Predicate returning @c true if all the required attributes for this
   * BinomialDistribution object have been set.
   *
   * @return @c true to indicate that all the required attributes of this
   * BinomialDistribution have been set, otherwise @c false is returned.
   */
  virtual bool hasRequiredAttributes() const;


  /**
   * Predicate returning @c true if all the required elements for this
   * BinomialDistribution object have been set.
   *
   * @return @c true to indicate that all the required elements of this
   * BinomialDistribution have been set, otherwise @c false is returned.
   *
   *
   * @note The required elements for the BinomialDistribution object are:
   * @li "numberOfTrials"
   * @li "probabilityOfSuccess"
   */
  virtual bool hasRequiredElements() const;



  /** @cond doxygenLibsbmlInternal */

  /**
   * Write any contained elements
   */
  virtual void writeElements(XMLOutputStream& stream) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Accepts the given SBMLVisitor
   */
  virtual bool accept(SBMLVisitor& v) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Sets the parent SBMLDocument
   */
  virtual void setSBMLDocument(SBMLDocument* d);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Connects to child elements
   */
  virtual void connectToChild();

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Enables/disables the given package with this element
   */
  virtual void enablePackageInternal(const std::string& pkgURI,
                                     const std::string& pkgPrefix,
                                     bool flag);

  /** @endcond */




  #ifndef SWIG



  /** @cond doxygenLibsbmlInternal */

  /**
   * Gets the value of the "attributeName" attribute of this
   * BinomialDistribution.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName, bool& value)
    const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Gets the value of the "attributeName" attribute of this
   * BinomialDistribution.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName, int& value) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Gets the value of the "attributeName" attribute of this
   * BinomialDistribution.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName,
                           double& value) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Gets the value of the "attributeName" attribute of this
   * BinomialDistribution.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName,
                           unsigned int& value) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Gets the value of the "attributeName" attribute of this
   * BinomialDistribution.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName,
                           std::string& value) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Gets the value of the "attributeName" attribute of this
   * BinomialDistribution.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName,
                           const char* value) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Predicate returning @c true if this BinomialDistribution's attribute
   * "attributeName" is set.
   *
   * @param attributeName, the name of the attribute to query.
   *
   * @return @c true if this BinomialDistribution's attribute "attributeName"
   * has been set, otherwise @c false is returned.
   */
  virtual bool isSetAttribute(const std::string& attributeName) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Sets the value of the "attributeName" attribute of this
   * BinomialDistribution.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName, bool value);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Sets the value of the "attributeName" attribute of this
   * BinomialDistribution.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName, int value);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Sets the value of the "attributeName" attribute of this
   * BinomialDistribution.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName, double value);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Sets the value of the "attributeName" attribute of this
   * BinomialDistribution.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName,
                           unsigned int value);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Sets the value of the "attributeName" attribute of this
   * BinomialDistribution.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName,
                           const std::string& value);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Sets the value of the "attributeName" attribute of this
   * BinomialDistribution.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName, const char*
    value);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Unsets the value of the "attributeName" attribute of this
   * BinomialDistribution.
   *
   * @param attributeName, the name of the attribute to query.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int unsetAttribute(const std::string& attributeName);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Creates and returns an new "elementName" object in this
   * BinomialDistribution.
   *
   * @param elementName, the name of the element to create.
   *
   * @return pointer to the element created.
   */
  virtual SBase* createChildObject(const std::string& elementName);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Adds a new "elementName" object to this BinomialDistribution.
   *
   * @param elementName, the name of the element to create.
   *
   * @param element, pointer to the element to be added.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int addChildObject(const std::string& elementName,
                             const SBase* element);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Removes and returns the new "elementName" object with the given id in this
   * BinomialDistribution.
   *
   * @param elementName, the name of the element to remove.
   *
   * @param id, the id of the element to remove.
   *
   * @return pointer to the element removed.
   */
  virtual SBase* removeChildObject(const std::string& elementName,
                                   const std::string& id);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Returns the number of "elementName" in this BinomialDistribution.
   *
   * @param elementName, the name of the element to get number of.
   *
   * @return unsigned int number of elements.
   */
  virtual unsigned int getNumObjects(const std::string& elementName);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Returns the nth object of "objectName" in this BinomialDistribution.
   *
   * @param elementName, the name of the element to get number of.
   *
   * @param index, unsigned int the index of the object to retrieve.
   *
   * @return pointer to the object.
   */
  virtual SBase* getObject(const std::string& elementName, unsigned int index);

  /** @endcond */




  #endif /* !SWIG */


  /**
   * Returns the first child element that has the given @p id in the model-wide
   * SId namespace, or @c NULL if no such object is found.
   *
   * @param id a string representing the id attribute of the object to
   * retrieve.
   *
   * @return a pointer to the SBase element with the given @p id. If no such
   * object is found, this method returns @c NULL.
   */
  virtual SBase* getElementBySId(const std::string& id);


  /**
   * Returns the first child element that has the given @p metaid, or @c NULL
   * if no such object is found.
   *
   * @param metaid a string representing the metaid attribute of the object to
   * retrieve.
   *
   * @return a pointer to the SBase element with the given @p metaid. If no
   * such object is found this method returns @c NULL.
   */
  virtual SBase* getElementByMetaId(const std::string& metaid);


  /**
   * Returns a List of all child SBase objects, including those nested to an
   * arbitrary depth.
   *
   * @param filter an ElementFilter that may impose restrictions on the objects
   * to be retrieved.
   *
   * @return a List* pointer of pointers to all SBase child objects with any
   * restriction imposed.
   */
  virtual List* getAllElements(ElementFilter * filter = NULL);


protected:


  /** @cond doxygenLibsbmlInternal */

  /**
   * Creates a new object from the next XMLToken on the XMLInputStream
   */
  virtual SBase* createObject(XMLInputStream& stream);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Adds the expected attributes for this element
   */
  virtual void addExpectedAttributes(ExpectedAttributes& attributes);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Reads the expected attributes into the member data variables
   */
  virtual void readAttributes(const XMLAttributes& attributes,
                              const ExpectedAttributes& expectedAttributes);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Writes the attributes to the stream
   */
  virtual void writeAttributes(XMLOutputStream& stream) const;

  /** @endcond */


};



LIBSBML_CPP_NAMESPACE_END




#endif /* __cplusplus */




#ifndef SWIG




LIBSBML_CPP_NAMESPACE_BEGIN




BEGIN_C_DECLS


/**
 * Creates a new BinomialDistribution_t using the given SBML Level, Version and
 * &ldquo;distrib&rdquo; package version.
 *
 * @param level an unsigned int, the SBML Level to assign to this
 * BinomialDistribution_t.
 *
 * @param version an unsigned int, the SBML Version to assign to this
 * BinomialDistribution_t.
 *
 * @param pkgVersion an unsigned int, the SBML Distrib Version to assign to
 * this BinomialDistribution_t.
 *
 * @copydetails doc_note_setting_lv_pkg
 *
 * @copydetails doc_returned_owned_pointer
 *
 * @memberof BinomialDistribution_t
 */
LIBSBML_EXTERN
BinomialDistribution_t *
BinomialDistribution_create(unsigned int level,
                            unsigned int version,
                            unsigned int pkgVersion);


/**
 * Creates and returns a deep copy of this BinomialDistribution_t object.
 *
 * @param bd the BinomialDistribution_t structure.
 *
 * @return a (deep) copy of this BinomialDistribution_t object.
 *
 * @copydetails doc_returned_owned_pointer
 *
 * @memberof BinomialDistribution_t
 */
LIBSBML_EXTERN
BinomialDistribution_t*
BinomialDistribution_clone(const BinomialDistribution_t* bd);


/**
 * Frees this BinomialDistribution_t object.
 *
 * @param bd the BinomialDistribution_t structure.
 *
 * @memberof BinomialDistribution_t
 */
LIBSBML_EXTERN
void
BinomialDistribution_free(BinomialDistribution_t* bd);


/**
 * Returns the value of the "numberOfTrials" element of this
 * BinomialDistribution_t.
 *
 * @param bd the BinomialDistribution_t structure whose numberOfTrials is
 * sought.
 *
 * @return the value of the "numberOfTrials" element of this
 * BinomialDistribution_t as a UncertValue*.
 *
 * @memberof BinomialDistribution_t
 */
LIBSBML_EXTERN
const UncertValue_t*
BinomialDistribution_getNumberOfTrials(const BinomialDistribution_t * bd);


/**
 * Returns the value of the "probabilityOfSuccess" element of this
 * BinomialDistribution_t.
 *
 * @param bd the BinomialDistribution_t structure whose probabilityOfSuccess is
 * sought.
 *
 * @return the value of the "probabilityOfSuccess" element of this
 * BinomialDistribution_t as a UncertValue*.
 *
 * @memberof BinomialDistribution_t
 */
LIBSBML_EXTERN
const UncertValue_t*
BinomialDistribution_getProbabilityOfSuccess(const BinomialDistribution_t *
  bd);


/**
 * Predicate returning @c 1 (true) if this BinomialDistribution_t's
 * "numberOfTrials" element is set.
 *
 * @param bd the BinomialDistribution_t structure.
 *
 * @return @c 1 (true) if this BinomialDistribution_t's "numberOfTrials"
 * element has been set, otherwise @c 0 (false) is returned.
 *
 * @memberof BinomialDistribution_t
 */
LIBSBML_EXTERN
int
BinomialDistribution_isSetNumberOfTrials(const BinomialDistribution_t * bd);


/**
 * Predicate returning @c 1 (true) if this BinomialDistribution_t's
 * "probabilityOfSuccess" element is set.
 *
 * @param bd the BinomialDistribution_t structure.
 *
 * @return @c 1 (true) if this BinomialDistribution_t's "probabilityOfSuccess"
 * element has been set, otherwise @c 0 (false) is returned.
 *
 * @memberof BinomialDistribution_t
 */
LIBSBML_EXTERN
int
BinomialDistribution_isSetProbabilityOfSuccess(const BinomialDistribution_t *
  bd);


/**
 * Sets the value of the "numberOfTrials" element of this
 * BinomialDistribution_t.
 *
 * @param bd the BinomialDistribution_t structure.
 *
 * @param numberOfTrials UncertValue_t* value of the "numberOfTrials" element
 * to be set.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof BinomialDistribution_t
 */
LIBSBML_EXTERN
int
BinomialDistribution_setNumberOfTrials(BinomialDistribution_t * bd,
                                       const UncertValue_t* numberOfTrials);


/**
 * Sets the value of the "probabilityOfSuccess" element of this
 * BinomialDistribution_t.
 *
 * @param bd the BinomialDistribution_t structure.
 *
 * @param probabilityOfSuccess UncertValue_t* value of the
 * "probabilityOfSuccess" element to be set.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof BinomialDistribution_t
 */
LIBSBML_EXTERN
int
BinomialDistribution_setProbabilityOfSuccess(BinomialDistribution_t * bd,
                                             const UncertValue_t*
                                               probabilityOfSuccess);


/**
 * Creates a new UncertValue_t object, adds it to this BinomialDistribution_t
 * object and returns the UncertValue_t object created.
 *
 * @param bd the BinomialDistribution_t structure to which the UncertValue_t
 * should be added.
 *
 * @return a new UncertValue_t object instance.
 *
 * @memberof BinomialDistribution_t
 */
LIBSBML_EXTERN
UncertValue_t*
BinomialDistribution_createNumberOfTrials(BinomialDistribution_t* bd);


/**
 * Creates a new UncertValue_t object, adds it to this BinomialDistribution_t
 * object and returns the UncertValue_t object created.
 *
 * @param bd the BinomialDistribution_t structure to which the UncertValue_t
 * should be added.
 *
 * @return a new UncertValue_t object instance.
 *
 * @memberof BinomialDistribution_t
 */
LIBSBML_EXTERN
UncertValue_t*
BinomialDistribution_createProbabilityOfSuccess(BinomialDistribution_t* bd);


/**
 * Unsets the value of the "numberOfTrials" element of this
 * BinomialDistribution_t.
 *
 * @param bd the BinomialDistribution_t structure.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof BinomialDistribution_t
 */
LIBSBML_EXTERN
int
BinomialDistribution_unsetNumberOfTrials(BinomialDistribution_t * bd);


/**
 * Unsets the value of the "probabilityOfSuccess" element of this
 * BinomialDistribution_t.
 *
 * @param bd the BinomialDistribution_t structure.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof BinomialDistribution_t
 */
LIBSBML_EXTERN
int
BinomialDistribution_unsetProbabilityOfSuccess(BinomialDistribution_t * bd);


/**
 * Predicate returning @c 1 (true) if all the required attributes for this
 * BinomialDistribution_t object have been set.
 *
 * @param bd the BinomialDistribution_t structure.
 *
 * @return @c 1 (true) to indicate that all the required attributes of this
 * BinomialDistribution_t have been set, otherwise @c 0 (false) is returned.
 *
 * @memberof BinomialDistribution_t
 */
LIBSBML_EXTERN
int
BinomialDistribution_hasRequiredAttributes(const BinomialDistribution_t * bd);


/**
 * Predicate returning @c 1 (true) if all the required elements for this
 * BinomialDistribution_t object have been set.
 *
 * @param bd the BinomialDistribution_t structure.
 *
 * @return @c 1 (true) to indicate that all the required elements of this
 * BinomialDistribution_t have been set, otherwise @c 0 (false) is returned.
 *
 *
 * @note The required elements for the BinomialDistribution_t object are:
 * @li "numberOfTrials"
 * @li "probabilityOfSuccess"
 *
 * @memberof BinomialDistribution_t
 */
LIBSBML_EXTERN
int
BinomialDistribution_hasRequiredElements(const BinomialDistribution_t * bd);




END_C_DECLS




LIBSBML_CPP_NAMESPACE_END




#endif /* !SWIG */




#endif /* !BinomialDistribution_H__ */


