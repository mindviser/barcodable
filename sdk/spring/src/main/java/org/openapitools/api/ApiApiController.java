package org.openapitools.api;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.context.request.NativeWebRequest;
import java.util.Optional;
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.SpringCodegen", date = "2020-03-27T18:11:19.626-04:00[America/New_York]")

@Controller
@RequestMapping("${openapi.barcodableCom.base-path:/magicCashew/barcodable/1.0.0}")
public class ApiApiController implements ApiApi {

    private final NativeWebRequest request;

    @org.springframework.beans.factory.annotation.Autowired
    public ApiApiController(NativeWebRequest request) {
        this.request = request;
    }

    @Override
    public Optional<NativeWebRequest> getRequest() {
        return Optional.ofNullable(request);
    }

}
