#
# Barcodable.com API
# Barcodable.com API
# Version: 1.5.0
# Contact: support@barcodable.com
# Generated by OpenAPI Generator: https://openapi-generator.tech
#

<#
.SYNOPSIS

Convert between UPC, EAN, and ASIN product codes.

.DESCRIPTION

No description available.

.PARAMETER UpcEanAsin
UPC, EAN, or ASIN

.OUTPUTS

InlineResponse200
#>
function Convert-Code {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipeline = $true, ValueFromPipelineByPropertyName = $true, Mandatory = $false)]
        [String]
        ${UpcEanAsin}
    )

    Process {
        'Calling method: Convert-Code' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $LocalVarAccepts = @()
        $LocalVarContentTypes = @()
        $LocalVarQueryParameters = @{}
        $LocalVarHeaderParameters = @{}
        $LocalVarFormParameters = @{}
        $LocalVarPathParameters = @{}
        $LocalVarCookieParameters = @{}
        $LocalVarBodyParameter

        $Configuration = Get-Configuration
        # HTTP header 'Accept' (if needed)
        $LocalVarAccepts = @('application/json')

        $LocalVarUri = '/api/v1/convert/{upc | ean | asin}'
        if (!$UpcEanAsin) {
            throw "Error! The required parameter `UpcEanAsin` missing when calling convertCode."
        }
        $LocalVarUri = $LocalVarUri.replace('{upc | ean | asin}', $UpcEanAsin)

        $LocalVarResult = Invoke-ApiClient -Method 'GET' `
                                -Uri $LocalVarUri `
                                -Accepts $LocalVarAccepts `
                                -ContentTypes $LocalVarContentTypes `
                                -Body $LocalVarBodyParameter `
                                -HeaderParameters $LocalVarHeaderParameters `
                                -QueryParameters $LocalVarQueryParameters `
                                -FormParameters $LocalVarFormParameters `
                                -CookieParameters $LocalVarCookieParameters `
                                -ReturnType "InlineResponse200"

        return $LocalVarResult["Response"]
    }
}
