
/* ==== FUN_004403a0 @ 004403a0 ==== 
 * signature: undefined __register FUN_004403a0(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 004403a0-004403c4
 */

void FUN_004403a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004026b8(0xc);
  *puVar1 = *(undefined4 *)(param_1 + 0x50);
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  *(undefined4 **)(param_1 + 0x50) = puVar1;
  return;
}


