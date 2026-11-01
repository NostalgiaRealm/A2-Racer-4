
/* ==== FUN_0040ce60 @ 0040ce60 ==== 
 * signature: undefined __register FUN_0040ce60(char * param_1, byte * param_2)
 * body: 0040ce60-0040ce72
 */

void FUN_0040ce60(char *param_1,byte *param_2)

{
  if (*param_1 == '\x01') {
    FUN_00407ca0(param_2);
    return;
  }
  FUN_0040ce14((int)param_1,(int)param_2);
  return;
}


