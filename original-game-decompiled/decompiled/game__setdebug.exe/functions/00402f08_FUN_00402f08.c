
/* ==== FUN_00402f08 @ 00402f08 ==== 
 * signature: undefined4 __register FUN_00402f08(int * param_1, undefined4 param_2)
 * body: 00402f08-00402f1d
 */

undefined4 FUN_00402f08(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 in_ZF;
  
  FUN_00402ec0(*param_1);
  if ((bool)in_ZF) {
    uVar1 = TStrings_vmt_00c();
    return uVar1;
  }
  return param_2;
}


