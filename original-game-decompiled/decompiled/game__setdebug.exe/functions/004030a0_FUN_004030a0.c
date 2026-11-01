
/* ==== FUN_004030a0 @ 004030a0 ==== 
 * signature: undefined4 __register FUN_004030a0(undefined4 param_1, ULONG_PTR param_2)
 * body: 004030a0-004030bf
 */

undefined4 FUN_004030a0(undefined4 param_1,ULONG_PTR param_2)

{
  ULONG_PTR UStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (DAT_00446008 != '\0') {
    UStack_c = param_2;
    uStack_8 = param_1;
    uStack_4 = param_1;
    RaiseException(0xeedfae4,0,2,&UStack_c);
    param_1 = uStack_4;
  }
  return param_1;
}


