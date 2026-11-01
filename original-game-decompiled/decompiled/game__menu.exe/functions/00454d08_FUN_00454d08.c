
/* ==== FUN_00454d08 @ 00454d08 ==== 
 * signature: undefined __register FUN_00454d08(undefined4 * param_1, uint * param_2)
 * body: 00454d08-00454d3a
 */

void FUN_00454d08(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0x100;
  do {
    uVar1 = FUN_00454cdc(*param_1);
    *param_2 = uVar1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


