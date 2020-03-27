# coding: utf-8

"""
    Barcodable.com API

    Barcodable.com API  # noqa: E501

    The version of the OpenAPI document: 1.5.0
    Contact: support@barcodable.com
    Generated by: https://openapi-generator.tech
"""


from __future__ import absolute_import

import unittest
import datetime

import openapi_client
from openapi_client.models.not_found import NotFound  # noqa: E501
from openapi_client.rest import ApiException

class TestNotFound(unittest.TestCase):
    """NotFound unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test NotFound
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.not_found.NotFound()  # noqa: E501
        if include_optional :
            return NotFound(
                message = 'Item not found.', 
                status = 404
            )
        else :
            return NotFound(
        )

    def testNotFound(self):
        """Test NotFound"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
