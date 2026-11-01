
/* ==== FUN_00434ea8 @ 00434ea8 ==== 
 * signature: undefined4 __register FUN_00434ea8(int param_1)
 * body: 00434ea6-00434eb2
 */

undefined4 FUN_00434ea8(int param_1)

{
  int iVar1;
  
  do {
    iVar1 = param_1;
    param_1 = *(int *)(iVar1 + 0x58);
  } while (param_1 != 0);
  return *(undefined4 *)(iVar1 + 100);
}


