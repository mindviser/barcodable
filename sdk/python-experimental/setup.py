# coding: utf-8

"""
    Barcodable.com API

    Barcodable.com API  # noqa: E501

    The version of the OpenAPI document: 1.5.0
    Contact: support@barcodable.com
    Generated by: https://openapi-generator.tech
"""


from setuptools import setup, find_packages  # noqa: H301

NAME = "openapi-client"
VERSION = "1.0.0"
# To install the library, run the following
#
# python setup.py install
#
# prerequisite: setuptools
# http://pypi.python.org/pypi/setuptools

REQUIRES = [
  "urllib3 >= 1.15",
  "six >= 1.10",
  "certifi",
  "python-dateutil",
  "nulltype",
]
EXTRAS = {':python_version <= "2.7"': ['future']}

setup(
    name=NAME,
    version=VERSION,
    description="Barcodable.com API",
    author="OpenAPI Generator community",
    author_email="support@barcodable.com",
    url="",
    keywords=["OpenAPI", "OpenAPI-Generator", "Barcodable.com API"],
    install_requires=REQUIRES,
    extras_require=EXTRAS,
    packages=find_packages(exclude=["test", "tests"]),
    include_package_data=True,
    license="Apache 2.0",
    long_description="""\
    Barcodable.com API  # noqa: E501
    """
)
