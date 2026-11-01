
/* ==== FUN_004033e8 @ 004033e8 ==== 
 * signature: undefined4 __register FUN_004033e8(undefined4 param_1, ULONG_PTR param_2)
 * body: 004033e8-00403404
 */

undefined4 FUN_004033e8(undefined4 param_1,ULONG_PTR param_2)

{
  ULONG_PTR UStack_8;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (1 < DAT_004aa008) {
    UStack_8 = param_2;
    RaiseException(0xeedfae3,0,2,&UStack_8);
  }
  return uStack_4;
}


