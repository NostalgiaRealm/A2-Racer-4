
/* ==== FUN_00403190 @ 00403190 ==== 
 * signature: undefined4 __register FUN_00403190(int * param_1, undefined4 param_2)
 * body: 00403190-004031a5
 */

undefined4 FUN_00403190(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 in_ZF;
  
  FUN_00403148(*param_1);
  if ((bool)in_ZF) {
    uVar1 = TStrings_vmt_00c();
    return uVar1;
  }
  return param_2;
}


