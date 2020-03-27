--  Barcodable.com API
--  Barcodable.com API
--
--  The version of the OpenAPI document: 1.5.0
--  Contact: support@barcodable.com
--
--  NOTE: This package is auto generated by OpenAPI-Generator 4.3.0.
--  https://openapi-generator.tech
--  Do not edit the class manually.

with Swagger.Servers;
with .Models;
with Security.Permissions;
package .Skeletons is
   use .Models;
   type Server_Type is limited interface;



   --  Convert between UPC, EAN, and ASIN product codes.
   --  Returns the converted UPC, EAN, and ASIN codes.
   procedure Convert_Code
      (Server : in out Server_Type;
       Upc _Pipe ean _Pipe asin : in Swagger.UString;
       Result  : out .Models.InlineResponse200_Type;
       Context : in out Swagger.Servers.Context_Type) is abstract;

   --  Find item by asin code
   --  Returns a single item
   procedure Get_Item_By_A_S_I_N
      (Server : in out Server_Type;
       Asin : in Swagger.UString;
       Result  : out .Models.Item_Type;
       Context : in out Swagger.Servers.Context_Type) is abstract;

   --  Find item by UPC code
   --  Returns a single item
   procedure Get_Item_By_E_A_N
      (Server : in out Server_Type;
       Ean : in Swagger.UString;
       Result  : out .Models.Item_Type;
       Context : in out Swagger.Servers.Context_Type) is abstract;

   --  Find item by UPC code
   --  Returns a single item
   procedure Get_Item_By_U_P_C
      (Server : in out Server_Type;
       Upc : in Swagger.UString;
       Result  : out .Models.Item_Type;
       Context : in out Swagger.Servers.Context_Type) is abstract;

   generic
      type Implementation_Type is limited new Server_Type with private;
      URI_Prefix : String := "";
   package Skeleton is

      procedure Register (Server : in out Swagger.Servers.Application_Type'Class);


      --  Convert between UPC, EAN, and ASIN product codes.
      procedure Convert_Code
         (Req     : in out Swagger.Servers.Request'Class;
          Reply   : in out Swagger.Servers.Response'Class;
          Stream  : in out Swagger.Servers.Output_Stream'Class;
          Context : in out Swagger.Servers.Context_Type);


      --  Find item by asin code
      procedure Get_Item_By_A_S_I_N
         (Req     : in out Swagger.Servers.Request'Class;
          Reply   : in out Swagger.Servers.Response'Class;
          Stream  : in out Swagger.Servers.Output_Stream'Class;
          Context : in out Swagger.Servers.Context_Type);


      --  Find item by UPC code
      procedure Get_Item_By_E_A_N
         (Req     : in out Swagger.Servers.Request'Class;
          Reply   : in out Swagger.Servers.Response'Class;
          Stream  : in out Swagger.Servers.Output_Stream'Class;
          Context : in out Swagger.Servers.Context_Type);


      --  Find item by UPC code
      procedure Get_Item_By_U_P_C
         (Req     : in out Swagger.Servers.Request'Class;
          Reply   : in out Swagger.Servers.Response'Class;
          Stream  : in out Swagger.Servers.Output_Stream'Class;
          Context : in out Swagger.Servers.Context_Type);

   end Skeleton;

   generic
      type Implementation_Type is limited new Server_Type with private;
      URI_Prefix : String := "";
   package Shared_Instance is

      procedure Register (Server : in out Swagger.Servers.Application_Type'Class);


      --  Convert between UPC, EAN, and ASIN product codes.
      procedure Convert_Code
         (Req     : in out Swagger.Servers.Request'Class;
          Reply   : in out Swagger.Servers.Response'Class;
          Stream  : in out Swagger.Servers.Output_Stream'Class;
          Context : in out Swagger.Servers.Context_Type);


      --  Find item by asin code
      procedure Get_Item_By_A_S_I_N
         (Req     : in out Swagger.Servers.Request'Class;
          Reply   : in out Swagger.Servers.Response'Class;
          Stream  : in out Swagger.Servers.Output_Stream'Class;
          Context : in out Swagger.Servers.Context_Type);


      --  Find item by UPC code
      procedure Get_Item_By_E_A_N
         (Req     : in out Swagger.Servers.Request'Class;
          Reply   : in out Swagger.Servers.Response'Class;
          Stream  : in out Swagger.Servers.Output_Stream'Class;
          Context : in out Swagger.Servers.Context_Type);


      --  Find item by UPC code
      procedure Get_Item_By_U_P_C
         (Req     : in out Swagger.Servers.Request'Class;
          Reply   : in out Swagger.Servers.Response'Class;
          Stream  : in out Swagger.Servers.Output_Stream'Class;
          Context : in out Swagger.Servers.Context_Type);


   private
      protected Server is

         --  Convert between UPC, EAN, and ASIN product codes.
         procedure Convert_Code
            (Upc _Pipe ean _Pipe asin : in Swagger.UString;
             Result  : out .Models.InlineResponse200_Type;
             Context : in out Swagger.Servers.Context_Type);

         --  Find item by asin code
         procedure Get_Item_By_A_S_I_N
            (Asin : in Swagger.UString;
             Result  : out .Models.Item_Type;
             Context : in out Swagger.Servers.Context_Type);

         --  Find item by UPC code
         procedure Get_Item_By_E_A_N
            (Ean : in Swagger.UString;
             Result  : out .Models.Item_Type;
             Context : in out Swagger.Servers.Context_Type);

         --  Find item by UPC code
         procedure Get_Item_By_U_P_C
            (Upc : in Swagger.UString;
             Result  : out .Models.Item_Type;
             Context : in out Swagger.Servers.Context_Type);

      private
         Impl : Implementation_Type;
      end Server;
   end Shared_Instance;

end .Skeletons;
