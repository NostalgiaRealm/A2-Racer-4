
/* ==== FUN_0044b340 @ 0044b340 ==== 
 * signature: undefined __register FUN_0044b340(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 0044b340-0044b364
 */

void FUN_0044b340(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0040277c(0xc);
  *puVar1 = *(undefined4 *)(param_1 + 0x50);
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  *(undefined4 **)(param_1 + 0x50) = puVar1;
  return;
}


