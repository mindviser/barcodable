=begin comment

Barcodable.com API

Barcodable.com API

The version of the OpenAPI document: 1.5.0
Contact: support@barcodable.com
Generated by: https://openapi-generator.tech

=end comment

=cut

#
# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# Do not edit the class manually.
# Ref: https://openapi-generator.tech
#
package WWW::OpenAPIClient::ProductLookupApi;

require 5.6.0;
use strict;
use warnings;
use utf8; 
use Exporter;
use Carp qw( croak );
use Log::Any qw($log);

use WWW::OpenAPIClient::ApiClient;

use base "Class::Data::Inheritable";

__PACKAGE__->mk_classdata('method_documentation' => {});

sub new {
    my $class = shift;
    my $api_client;

    if ($_[0] && ref $_[0] && ref $_[0] eq 'WWW::OpenAPIClient::ApiClient' ) {
        $api_client = $_[0];
    } else {
        $api_client = WWW::OpenAPIClient::ApiClient->new(@_);
    }

    bless { api_client => $api_client }, $class;

}


#
# get_item_by_asin
#
# Find item by asin code
# 
# @param string $asin ASIN code of item to return (required)
{
    my $params = {
    'asin' => {
        data_type => 'string',
        description => 'ASIN code of item to return',
        required => '1',
    },
    };
    __PACKAGE__->method_documentation->{ 'get_item_by_asin' } = { 
        summary => 'Find item by asin code',
        params => $params,
        returns => 'Item',
        };
}
# @return Item
#
sub get_item_by_asin {
    my ($self, %args) = @_;

    # verify the required parameter 'asin' is set
    unless (exists $args{'asin'}) {
      croak("Missing the required parameter 'asin' when calling get_item_by_asin");
    }

    # parse inputs
    my $_resource_path = '/api/v1/asin/{asin}';

    my $_method = 'GET';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept('application/json');
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type();

    # path params
    if ( exists $args{'asin'}) {
        my $_base_variable = "{" . "asin" . "}";
        my $_base_value = $self->{api_client}->to_path_value($args{'asin'});
        $_resource_path =~ s/$_base_variable/$_base_value/g;
    }

    my $_body_data;
    # authentication setting, if any
    my $auth_settings = [qw()];

    # make the API Call
    my $response = $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    if (!$response) {
        return;
    }
    my $_response_object = $self->{api_client}->deserialize('Item', $response);
    return $_response_object;
}

#
# get_item_by_ean
#
# Find item by UPC code
# 
# @param string $ean EAN code of item to return (required)
{
    my $params = {
    'ean' => {
        data_type => 'string',
        description => 'EAN code of item to return',
        required => '1',
    },
    };
    __PACKAGE__->method_documentation->{ 'get_item_by_ean' } = { 
        summary => 'Find item by UPC code',
        params => $params,
        returns => 'Item',
        };
}
# @return Item
#
sub get_item_by_ean {
    my ($self, %args) = @_;

    # verify the required parameter 'ean' is set
    unless (exists $args{'ean'}) {
      croak("Missing the required parameter 'ean' when calling get_item_by_ean");
    }

    # parse inputs
    my $_resource_path = '/api/v1/ean/{ean}';

    my $_method = 'GET';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept('application/json');
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type();

    # path params
    if ( exists $args{'ean'}) {
        my $_base_variable = "{" . "ean" . "}";
        my $_base_value = $self->{api_client}->to_path_value($args{'ean'});
        $_resource_path =~ s/$_base_variable/$_base_value/g;
    }

    my $_body_data;
    # authentication setting, if any
    my $auth_settings = [qw()];

    # make the API Call
    my $response = $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    if (!$response) {
        return;
    }
    my $_response_object = $self->{api_client}->deserialize('Item', $response);
    return $_response_object;
}

#
# get_item_by_upc
#
# Find item by UPC code
# 
# @param string $upc UPC code of item to return (required)
{
    my $params = {
    'upc' => {
        data_type => 'string',
        description => 'UPC code of item to return',
        required => '1',
    },
    };
    __PACKAGE__->method_documentation->{ 'get_item_by_upc' } = { 
        summary => 'Find item by UPC code',
        params => $params,
        returns => 'Item',
        };
}
# @return Item
#
sub get_item_by_upc {
    my ($self, %args) = @_;

    # verify the required parameter 'upc' is set
    unless (exists $args{'upc'}) {
      croak("Missing the required parameter 'upc' when calling get_item_by_upc");
    }

    # parse inputs
    my $_resource_path = '/api/v1/upc/{upc}';

    my $_method = 'GET';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept('application/json');
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type();

    # path params
    if ( exists $args{'upc'}) {
        my $_base_variable = "{" . "upc" . "}";
        my $_base_value = $self->{api_client}->to_path_value($args{'upc'});
        $_resource_path =~ s/$_base_variable/$_base_value/g;
    }

    my $_body_data;
    # authentication setting, if any
    my $auth_settings = [qw()];

    # make the API Call
    my $response = $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    if (!$response) {
        return;
    }
    my $_response_object = $self->{api_client}->deserialize('Item', $response);
    return $_response_object;
}

1;
