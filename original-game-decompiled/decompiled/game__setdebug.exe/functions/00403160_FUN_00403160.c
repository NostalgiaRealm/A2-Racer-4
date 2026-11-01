
/* ==== FUN_00403160 @ 00403160 ==== 
 * signature: undefined4 __register FUN_00403160(undefined4 param_1, ULONG_PTR param_2)
 * body: 00403160-0040317c
 */

undefined4 FUN_00403160(undefined4 param_1,ULONG_PTR param_2)

{
  ULONG_PTR UStack_8;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (1 < DAT_00446008) {
    UStack_8 = param_2;
    RaiseException(0xeedfae3,0,2,&UStack_8);
  }
  return uStack_4;
}


