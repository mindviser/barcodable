import 'package:jaguar_serializer/jaguar_serializer.dart';


part 'not_found.jser.dart';

class NotFound {
  
  @Alias('message', isNullable: false,  )
  final String message;
  
  @Alias('status', isNullable: false,  )
  final int status;
  

  NotFound(
      

{
     this.message = null,  
     this.status = null 
    
    }
  );

  @override
  String toString() {
    return 'NotFound[message=$message, status=$status, ]';
  }
}

@GenSerializer(nullableFields: true)
class NotFoundSerializer extends Serializer<NotFound> with _$NotFoundSerializer {

}

