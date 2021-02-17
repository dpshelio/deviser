# Trying out pytest with Deviser generator tests
# Matthew Gillman, UCL, 16th December 2020
import os
import sys
import pytest
# If we can restructure it ok, we might not need this...
sys.path.append(os.path.dirname(os.path.abspath(__file__)) + '/../')
sys.path.append(os.path.dirname(os.path.abspath(__file__)) + '/../../')
sys.path.append(os.path.dirname(os.path.abspath(__file__)) + '/../../tests')
import deviser
import test_functions
from util import global_variables as gv


# @pytest.mark.parametrize("number", [1, 2, 3, 0, 42])
@pytest.mark.parametrize("name, flag, expected_return", [
    ('non-existent', '-g', 'failed to read file'),
    ('test_child', '-g', 'success'),
    ('test_child', 'missing', 'missing function argument'),
    ('test_child', 'wrong', 'invalid function arguments'),
    ('test_child', '-l', 'success'),  # Apparently problematic before?
    ('invalid', '-g', 'parsing error'),
    ('invalid', '-l', 'parsing error'),
    ('unknown_type', '-g', 'unknown type used'),
    ('unknown_error', '-g', 'missing required information'),
    ('bad_lo_element', '-g', 'unknown type used'),
    ('bad_concretes', '-g', 'missing required information'),
])
def test_deviser(name, flag, expected_return):
    """
    General function for running command-line Deviser tests.

    :param name: general name of test
    :param flag: a command-line flag
    :param expected_return: what we expect the test to return.
    :return: 0 on success, 1 on failure
    """
    this_dir = os.path.dirname(os.path.abspath(__file__))
    (path_to_tests, other) = os.path.split(this_dir)
    test_functions.set_path_to_tests(path_to_tests)

    expected_return = gv.return_codes[expected_return]
    error = gv.get_return_code(expected_return)
    filename = test_functions.set_up_test(name, flag, error)
    args = []
    if flag in ['-g', '-l', 'wrong']:
        args.append('deviser')
        args.append(flag)
        args.append(filename)
    elif flag == 'missing':
        args.append('deviser')
        args.append(filename)
    else:
        raise Exception

    deviser.main(args)
    # fail = test_functions.compare_return_codes(name, flag, expected_return,
    #                                           fails)
    # print('')
    # return fail
