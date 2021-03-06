/**
 * Barcodable.com API
 * Barcodable.com API
 *
 * The version of the OpenAPI document: 1.5.0
 * Contact: support@barcodable.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Item.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Item::Item()
{
    m_Upc = utility::conversions::to_string_t("");
    m_UpcIsSet = false;
    m_Ean = utility::conversions::to_string_t("");
    m_EanIsSet = false;
    m_Isbn = utility::conversions::to_string_t("");
    m_IsbnIsSet = false;
    m_Asin = utility::conversions::to_string_t("");
    m_AsinIsSet = false;
    m_Title = utility::conversions::to_string_t("");
    m_TitleIsSet = false;
    m_Sku = utility::conversions::to_string_t("");
    m_SkuIsSet = false;
    m_Mpn = utility::conversions::to_string_t("");
    m_MpnIsSet = false;
    m_Part_number = utility::conversions::to_string_t("");
    m_Part_numberIsSet = false;
    m_UpcsIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_Brand = utility::conversions::to_string_t("");
    m_BrandIsSet = false;
    m_Manufacturer = utility::conversions::to_string_t("");
    m_ManufacturerIsSet = false;
    m_Color = utility::conversions::to_string_t("");
    m_ColorIsSet = false;
    m_New_price = 0.0;
    m_New_priceIsSet = false;
    m_Used_price = 0.0;
    m_Used_priceIsSet = false;
    m_Currency_code = utility::conversions::to_string_t("");
    m_Currency_codeIsSet = false;
    m_Url = utility::conversions::to_string_t("");
    m_UrlIsSet = false;
    m_FeaturesIsSet = false;
    m_DimensionsIsSet = false;
    m_ImagesIsSet = false;
    m_Matched_itemsIsSet = false;
    m_Iso_country_codesIsSet = false;
    m_Company_name = utility::conversions::to_string_t("");
    m_Company_nameIsSet = false;
    m_Company_address = utility::conversions::to_string_t("");
    m_Company_addressIsSet = false;
    m_CategoriesIsSet = false;
    m_Category_hierarchiesIsSet = false;
}

Item::~Item()
{
}

void Item::validate()
{
    // TODO: implement validation
}

web::json::value Item::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_UpcIsSet)
    {
        val[utility::conversions::to_string_t("upc")] = ModelBase::toJson(m_Upc);
    }
    if(m_EanIsSet)
    {
        val[utility::conversions::to_string_t("ean")] = ModelBase::toJson(m_Ean);
    }
    if(m_IsbnIsSet)
    {
        val[utility::conversions::to_string_t("isbn")] = ModelBase::toJson(m_Isbn);
    }
    if(m_AsinIsSet)
    {
        val[utility::conversions::to_string_t("asin")] = ModelBase::toJson(m_Asin);
    }
    if(m_TitleIsSet)
    {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(m_Title);
    }
    if(m_SkuIsSet)
    {
        val[utility::conversions::to_string_t("sku")] = ModelBase::toJson(m_Sku);
    }
    if(m_MpnIsSet)
    {
        val[utility::conversions::to_string_t("mpn")] = ModelBase::toJson(m_Mpn);
    }
    if(m_Part_numberIsSet)
    {
        val[utility::conversions::to_string_t("part_number")] = ModelBase::toJson(m_Part_number);
    }
    if(m_UpcsIsSet)
    {
        val[utility::conversions::to_string_t("upcs")] = ModelBase::toJson(m_Upcs);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(m_Description);
    }
    if(m_BrandIsSet)
    {
        val[utility::conversions::to_string_t("brand")] = ModelBase::toJson(m_Brand);
    }
    if(m_ManufacturerIsSet)
    {
        val[utility::conversions::to_string_t("manufacturer")] = ModelBase::toJson(m_Manufacturer);
    }
    if(m_ColorIsSet)
    {
        val[utility::conversions::to_string_t("color")] = ModelBase::toJson(m_Color);
    }
    if(m_New_priceIsSet)
    {
        val[utility::conversions::to_string_t("new_price")] = ModelBase::toJson(m_New_price);
    }
    if(m_Used_priceIsSet)
    {
        val[utility::conversions::to_string_t("used_price")] = ModelBase::toJson(m_Used_price);
    }
    if(m_Currency_codeIsSet)
    {
        val[utility::conversions::to_string_t("currency_code")] = ModelBase::toJson(m_Currency_code);
    }
    if(m_UrlIsSet)
    {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(m_Url);
    }
    if(m_FeaturesIsSet)
    {
        val[utility::conversions::to_string_t("features")] = ModelBase::toJson(m_Features);
    }
    if(m_DimensionsIsSet)
    {
        val[utility::conversions::to_string_t("dimensions")] = ModelBase::toJson(m_Dimensions);
    }
    if(m_ImagesIsSet)
    {
        val[utility::conversions::to_string_t("images")] = ModelBase::toJson(m_Images);
    }
    if(m_Matched_itemsIsSet)
    {
        val[utility::conversions::to_string_t("matched_items")] = ModelBase::toJson(m_Matched_items);
    }
    if(m_Iso_country_codesIsSet)
    {
        val[utility::conversions::to_string_t("iso_country_codes")] = ModelBase::toJson(m_Iso_country_codes);
    }
    if(m_Company_nameIsSet)
    {
        val[utility::conversions::to_string_t("company_name")] = ModelBase::toJson(m_Company_name);
    }
    if(m_Company_addressIsSet)
    {
        val[utility::conversions::to_string_t("company_address")] = ModelBase::toJson(m_Company_address);
    }
    if(m_CategoriesIsSet)
    {
        val[utility::conversions::to_string_t("categories")] = ModelBase::toJson(m_Categories);
    }
    if(m_Category_hierarchiesIsSet)
    {
        val[utility::conversions::to_string_t("category_hierarchies")] = ModelBase::toJson(m_Category_hierarchies);
    }

    return val;
}

bool Item::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("upc")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upc"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_upc;
            ok &= ModelBase::fromJson(fieldValue, refVal_upc);
            setUpc(refVal_upc);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ean")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ean"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_ean;
            ok &= ModelBase::fromJson(fieldValue, refVal_ean);
            setEan(refVal_ean);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isbn")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isbn"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_isbn;
            ok &= ModelBase::fromJson(fieldValue, refVal_isbn);
            setIsbn(refVal_isbn);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asin")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asin"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_asin;
            ok &= ModelBase::fromJson(fieldValue, refVal_asin);
            setAsin(refVal_asin);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_title;
            ok &= ModelBase::fromJson(fieldValue, refVal_title);
            setTitle(refVal_title);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sku")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sku"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sku;
            ok &= ModelBase::fromJson(fieldValue, refVal_sku);
            setSku(refVal_sku);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mpn")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mpn"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_mpn;
            ok &= ModelBase::fromJson(fieldValue, refVal_mpn);
            setMpn(refVal_mpn);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("part_number")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("part_number"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_part_number;
            ok &= ModelBase::fromJson(fieldValue, refVal_part_number);
            setPartNumber(refVal_part_number);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upcs")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upcs"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_upcs;
            ok &= ModelBase::fromJson(fieldValue, refVal_upcs);
            setUpcs(refVal_upcs);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_description;
            ok &= ModelBase::fromJson(fieldValue, refVal_description);
            setDescription(refVal_description);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("brand")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("brand"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_brand;
            ok &= ModelBase::fromJson(fieldValue, refVal_brand);
            setBrand(refVal_brand);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("manufacturer")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manufacturer"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_manufacturer;
            ok &= ModelBase::fromJson(fieldValue, refVal_manufacturer);
            setManufacturer(refVal_manufacturer);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("color")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("color"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_color;
            ok &= ModelBase::fromJson(fieldValue, refVal_color);
            setColor(refVal_color);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_price")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_price"));
        if(!fieldValue.is_null())
        {
            double refVal_new_price;
            ok &= ModelBase::fromJson(fieldValue, refVal_new_price);
            setNewPrice(refVal_new_price);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used_price")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_price"));
        if(!fieldValue.is_null())
        {
            double refVal_used_price;
            ok &= ModelBase::fromJson(fieldValue, refVal_used_price);
            setUsedPrice(refVal_used_price);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("currency_code")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("currency_code"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_currency_code;
            ok &= ModelBase::fromJson(fieldValue, refVal_currency_code);
            setCurrencyCode(refVal_currency_code);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_url;
            ok &= ModelBase::fromJson(fieldValue, refVal_url);
            setUrl(refVal_url);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("features")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("features"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_features;
            ok &= ModelBase::fromJson(fieldValue, refVal_features);
            setFeatures(refVal_features);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dimensions")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dimensions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Object>> refVal_dimensions;
            ok &= ModelBase::fromJson(fieldValue, refVal_dimensions);
            setDimensions(refVal_dimensions);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("images")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("images"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_images;
            ok &= ModelBase::fromJson(fieldValue, refVal_images);
            setImages(refVal_images);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("matched_items")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("matched_items"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Object>> refVal_matched_items;
            ok &= ModelBase::fromJson(fieldValue, refVal_matched_items);
            setMatchedItems(refVal_matched_items);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iso_country_codes")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iso_country_codes"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_iso_country_codes;
            ok &= ModelBase::fromJson(fieldValue, refVal_iso_country_codes);
            setIsoCountryCodes(refVal_iso_country_codes);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("company_name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("company_name"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_company_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_company_name);
            setCompanyName(refVal_company_name);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("company_address")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("company_address"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_company_address;
            ok &= ModelBase::fromJson(fieldValue, refVal_company_address);
            setCompanyAddress(refVal_company_address);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("categories")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("categories"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_categories;
            ok &= ModelBase::fromJson(fieldValue, refVal_categories);
            setCategories(refVal_categories);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category_hierarchies")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category_hierarchies"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_category_hierarchies;
            ok &= ModelBase::fromJson(fieldValue, refVal_category_hierarchies);
            setCategoryHierarchies(refVal_category_hierarchies);
        }
    }
    return ok;
}

void Item::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_UpcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("upc"), m_Upc));
    }
    if(m_EanIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ean"), m_Ean));
    }
    if(m_IsbnIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isbn"), m_Isbn));
    }
    if(m_AsinIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("asin"), m_Asin));
    }
    if(m_TitleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("title"), m_Title));
    }
    if(m_SkuIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sku"), m_Sku));
    }
    if(m_MpnIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("mpn"), m_Mpn));
    }
    if(m_Part_numberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("part_number"), m_Part_number));
    }
    if(m_UpcsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("upcs"), m_Upcs));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("description"), m_Description));
    }
    if(m_BrandIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("brand"), m_Brand));
    }
    if(m_ManufacturerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("manufacturer"), m_Manufacturer));
    }
    if(m_ColorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("color"), m_Color));
    }
    if(m_New_priceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("new_price"), m_New_price));
    }
    if(m_Used_priceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("used_price"), m_Used_price));
    }
    if(m_Currency_codeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("currency_code"), m_Currency_code));
    }
    if(m_UrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("url"), m_Url));
    }
    if(m_FeaturesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("features"), m_Features));
    }
    if(m_DimensionsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("dimensions"), m_Dimensions));
    }
    if(m_ImagesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("images"), m_Images));
    }
    if(m_Matched_itemsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("matched_items"), m_Matched_items));
    }
    if(m_Iso_country_codesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("iso_country_codes"), m_Iso_country_codes));
    }
    if(m_Company_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("company_name"), m_Company_name));
    }
    if(m_Company_addressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("company_address"), m_Company_address));
    }
    if(m_CategoriesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("categories"), m_Categories));
    }
    if(m_Category_hierarchiesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("category_hierarchies"), m_Category_hierarchies));
    }
}

bool Item::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("upc")))
    {
        utility::string_t refVal_upc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("upc")), refVal_upc );
        setUpc(refVal_upc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ean")))
    {
        utility::string_t refVal_ean;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("ean")), refVal_ean );
        setEan(refVal_ean);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("isbn")))
    {
        utility::string_t refVal_isbn;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("isbn")), refVal_isbn );
        setIsbn(refVal_isbn);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("asin")))
    {
        utility::string_t refVal_asin;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("asin")), refVal_asin );
        setAsin(refVal_asin);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("title")))
    {
        utility::string_t refVal_title;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("title")), refVal_title );
        setTitle(refVal_title);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sku")))
    {
        utility::string_t refVal_sku;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sku")), refVal_sku );
        setSku(refVal_sku);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("mpn")))
    {
        utility::string_t refVal_mpn;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("mpn")), refVal_mpn );
        setMpn(refVal_mpn);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("part_number")))
    {
        utility::string_t refVal_part_number;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("part_number")), refVal_part_number );
        setPartNumber(refVal_part_number);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("upcs")))
    {
        std::vector<utility::string_t> refVal_upcs;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("upcs")), refVal_upcs );
        setUpcs(refVal_upcs);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("description")))
    {
        utility::string_t refVal_description;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("description")), refVal_description );
        setDescription(refVal_description);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("brand")))
    {
        utility::string_t refVal_brand;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("brand")), refVal_brand );
        setBrand(refVal_brand);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("manufacturer")))
    {
        utility::string_t refVal_manufacturer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("manufacturer")), refVal_manufacturer );
        setManufacturer(refVal_manufacturer);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("color")))
    {
        utility::string_t refVal_color;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("color")), refVal_color );
        setColor(refVal_color);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("new_price")))
    {
        double refVal_new_price;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("new_price")), refVal_new_price );
        setNewPrice(refVal_new_price);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("used_price")))
    {
        double refVal_used_price;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("used_price")), refVal_used_price );
        setUsedPrice(refVal_used_price);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("currency_code")))
    {
        utility::string_t refVal_currency_code;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("currency_code")), refVal_currency_code );
        setCurrencyCode(refVal_currency_code);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("url")))
    {
        utility::string_t refVal_url;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("url")), refVal_url );
        setUrl(refVal_url);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("features")))
    {
        std::vector<utility::string_t> refVal_features;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("features")), refVal_features );
        setFeatures(refVal_features);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("dimensions")))
    {
        std::vector<std::shared_ptr<Object>> refVal_dimensions;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("dimensions")), refVal_dimensions );
        setDimensions(refVal_dimensions);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("images")))
    {
        std::vector<utility::string_t> refVal_images;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("images")), refVal_images );
        setImages(refVal_images);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("matched_items")))
    {
        std::vector<std::shared_ptr<Object>> refVal_matched_items;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("matched_items")), refVal_matched_items );
        setMatchedItems(refVal_matched_items);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("iso_country_codes")))
    {
        std::vector<utility::string_t> refVal_iso_country_codes;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("iso_country_codes")), refVal_iso_country_codes );
        setIsoCountryCodes(refVal_iso_country_codes);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("company_name")))
    {
        utility::string_t refVal_company_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("company_name")), refVal_company_name );
        setCompanyName(refVal_company_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("company_address")))
    {
        utility::string_t refVal_company_address;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("company_address")), refVal_company_address );
        setCompanyAddress(refVal_company_address);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("categories")))
    {
        std::vector<utility::string_t> refVal_categories;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("categories")), refVal_categories );
        setCategories(refVal_categories);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("category_hierarchies")))
    {
        std::vector<utility::string_t> refVal_category_hierarchies;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("category_hierarchies")), refVal_category_hierarchies );
        setCategoryHierarchies(refVal_category_hierarchies);
    }
    return ok;
}

utility::string_t Item::getUpc() const
{
    return m_Upc;
}

void Item::setUpc(const utility::string_t& value)
{
    m_Upc = value;
    m_UpcIsSet = true;
}

bool Item::upcIsSet() const
{
    return m_UpcIsSet;
}

void Item::unsetUpc()
{
    m_UpcIsSet = false;
}
utility::string_t Item::getEan() const
{
    return m_Ean;
}

void Item::setEan(const utility::string_t& value)
{
    m_Ean = value;
    m_EanIsSet = true;
}

bool Item::eanIsSet() const
{
    return m_EanIsSet;
}

void Item::unsetEan()
{
    m_EanIsSet = false;
}
utility::string_t Item::getIsbn() const
{
    return m_Isbn;
}

void Item::setIsbn(const utility::string_t& value)
{
    m_Isbn = value;
    m_IsbnIsSet = true;
}

bool Item::isbnIsSet() const
{
    return m_IsbnIsSet;
}

void Item::unsetIsbn()
{
    m_IsbnIsSet = false;
}
utility::string_t Item::getAsin() const
{
    return m_Asin;
}

void Item::setAsin(const utility::string_t& value)
{
    m_Asin = value;
    m_AsinIsSet = true;
}

bool Item::asinIsSet() const
{
    return m_AsinIsSet;
}

void Item::unsetAsin()
{
    m_AsinIsSet = false;
}
utility::string_t Item::getTitle() const
{
    return m_Title;
}

void Item::setTitle(const utility::string_t& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}

bool Item::titleIsSet() const
{
    return m_TitleIsSet;
}

void Item::unsetTitle()
{
    m_TitleIsSet = false;
}
utility::string_t Item::getSku() const
{
    return m_Sku;
}

void Item::setSku(const utility::string_t& value)
{
    m_Sku = value;
    m_SkuIsSet = true;
}

bool Item::skuIsSet() const
{
    return m_SkuIsSet;
}

void Item::unsetSku()
{
    m_SkuIsSet = false;
}
utility::string_t Item::getMpn() const
{
    return m_Mpn;
}

void Item::setMpn(const utility::string_t& value)
{
    m_Mpn = value;
    m_MpnIsSet = true;
}

bool Item::mpnIsSet() const
{
    return m_MpnIsSet;
}

void Item::unsetMpn()
{
    m_MpnIsSet = false;
}
utility::string_t Item::getPartNumber() const
{
    return m_Part_number;
}

void Item::setPartNumber(const utility::string_t& value)
{
    m_Part_number = value;
    m_Part_numberIsSet = true;
}

bool Item::partNumberIsSet() const
{
    return m_Part_numberIsSet;
}

void Item::unsetPart_number()
{
    m_Part_numberIsSet = false;
}
std::vector<utility::string_t>& Item::getUpcs()
{
    return m_Upcs;
}

void Item::setUpcs(const std::vector<utility::string_t>& value)
{
    m_Upcs = value;
    m_UpcsIsSet = true;
}

bool Item::upcsIsSet() const
{
    return m_UpcsIsSet;
}

void Item::unsetUpcs()
{
    m_UpcsIsSet = false;
}
utility::string_t Item::getDescription() const
{
    return m_Description;
}

void Item::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool Item::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void Item::unsetDescription()
{
    m_DescriptionIsSet = false;
}
utility::string_t Item::getBrand() const
{
    return m_Brand;
}

void Item::setBrand(const utility::string_t& value)
{
    m_Brand = value;
    m_BrandIsSet = true;
}

bool Item::brandIsSet() const
{
    return m_BrandIsSet;
}

void Item::unsetBrand()
{
    m_BrandIsSet = false;
}
utility::string_t Item::getManufacturer() const
{
    return m_Manufacturer;
}

void Item::setManufacturer(const utility::string_t& value)
{
    m_Manufacturer = value;
    m_ManufacturerIsSet = true;
}

bool Item::manufacturerIsSet() const
{
    return m_ManufacturerIsSet;
}

void Item::unsetManufacturer()
{
    m_ManufacturerIsSet = false;
}
utility::string_t Item::getColor() const
{
    return m_Color;
}

void Item::setColor(const utility::string_t& value)
{
    m_Color = value;
    m_ColorIsSet = true;
}

bool Item::colorIsSet() const
{
    return m_ColorIsSet;
}

void Item::unsetColor()
{
    m_ColorIsSet = false;
}
double Item::getNewPrice() const
{
    return m_New_price;
}

void Item::setNewPrice(double value)
{
    m_New_price = value;
    m_New_priceIsSet = true;
}

bool Item::newPriceIsSet() const
{
    return m_New_priceIsSet;
}

void Item::unsetNew_price()
{
    m_New_priceIsSet = false;
}
double Item::getUsedPrice() const
{
    return m_Used_price;
}

void Item::setUsedPrice(double value)
{
    m_Used_price = value;
    m_Used_priceIsSet = true;
}

bool Item::usedPriceIsSet() const
{
    return m_Used_priceIsSet;
}

void Item::unsetUsed_price()
{
    m_Used_priceIsSet = false;
}
utility::string_t Item::getCurrencyCode() const
{
    return m_Currency_code;
}

void Item::setCurrencyCode(const utility::string_t& value)
{
    m_Currency_code = value;
    m_Currency_codeIsSet = true;
}

bool Item::currencyCodeIsSet() const
{
    return m_Currency_codeIsSet;
}

void Item::unsetCurrency_code()
{
    m_Currency_codeIsSet = false;
}
utility::string_t Item::getUrl() const
{
    return m_Url;
}

void Item::setUrl(const utility::string_t& value)
{
    m_Url = value;
    m_UrlIsSet = true;
}

bool Item::urlIsSet() const
{
    return m_UrlIsSet;
}

void Item::unsetUrl()
{
    m_UrlIsSet = false;
}
std::vector<utility::string_t>& Item::getFeatures()
{
    return m_Features;
}

void Item::setFeatures(const std::vector<utility::string_t>& value)
{
    m_Features = value;
    m_FeaturesIsSet = true;
}

bool Item::featuresIsSet() const
{
    return m_FeaturesIsSet;
}

void Item::unsetFeatures()
{
    m_FeaturesIsSet = false;
}
std::vector<std::shared_ptr<Object>>& Item::getDimensions()
{
    return m_Dimensions;
}

void Item::setDimensions(const std::vector<std::shared_ptr<Object>>& value)
{
    m_Dimensions = value;
    m_DimensionsIsSet = true;
}

bool Item::dimensionsIsSet() const
{
    return m_DimensionsIsSet;
}

void Item::unsetDimensions()
{
    m_DimensionsIsSet = false;
}
std::vector<utility::string_t>& Item::getImages()
{
    return m_Images;
}

void Item::setImages(const std::vector<utility::string_t>& value)
{
    m_Images = value;
    m_ImagesIsSet = true;
}

bool Item::imagesIsSet() const
{
    return m_ImagesIsSet;
}

void Item::unsetImages()
{
    m_ImagesIsSet = false;
}
std::vector<std::shared_ptr<Object>>& Item::getMatchedItems()
{
    return m_Matched_items;
}

void Item::setMatchedItems(const std::vector<std::shared_ptr<Object>>& value)
{
    m_Matched_items = value;
    m_Matched_itemsIsSet = true;
}

bool Item::matchedItemsIsSet() const
{
    return m_Matched_itemsIsSet;
}

void Item::unsetMatched_items()
{
    m_Matched_itemsIsSet = false;
}
std::vector<utility::string_t>& Item::getIsoCountryCodes()
{
    return m_Iso_country_codes;
}

void Item::setIsoCountryCodes(const std::vector<utility::string_t>& value)
{
    m_Iso_country_codes = value;
    m_Iso_country_codesIsSet = true;
}

bool Item::isoCountryCodesIsSet() const
{
    return m_Iso_country_codesIsSet;
}

void Item::unsetIso_country_codes()
{
    m_Iso_country_codesIsSet = false;
}
utility::string_t Item::getCompanyName() const
{
    return m_Company_name;
}

void Item::setCompanyName(const utility::string_t& value)
{
    m_Company_name = value;
    m_Company_nameIsSet = true;
}

bool Item::companyNameIsSet() const
{
    return m_Company_nameIsSet;
}

void Item::unsetCompany_name()
{
    m_Company_nameIsSet = false;
}
utility::string_t Item::getCompanyAddress() const
{
    return m_Company_address;
}

void Item::setCompanyAddress(const utility::string_t& value)
{
    m_Company_address = value;
    m_Company_addressIsSet = true;
}

bool Item::companyAddressIsSet() const
{
    return m_Company_addressIsSet;
}

void Item::unsetCompany_address()
{
    m_Company_addressIsSet = false;
}
std::vector<utility::string_t>& Item::getCategories()
{
    return m_Categories;
}

void Item::setCategories(const std::vector<utility::string_t>& value)
{
    m_Categories = value;
    m_CategoriesIsSet = true;
}

bool Item::categoriesIsSet() const
{
    return m_CategoriesIsSet;
}

void Item::unsetCategories()
{
    m_CategoriesIsSet = false;
}
std::vector<utility::string_t>& Item::getCategoryHierarchies()
{
    return m_Category_hierarchies;
}

void Item::setCategoryHierarchies(const std::vector<utility::string_t>& value)
{
    m_Category_hierarchies = value;
    m_Category_hierarchiesIsSet = true;
}

bool Item::categoryHierarchiesIsSet() const
{
    return m_Category_hierarchiesIsSet;
}

void Item::unsetCategory_hierarchies()
{
    m_Category_hierarchiesIsSet = false;
}
}
}
}
}


