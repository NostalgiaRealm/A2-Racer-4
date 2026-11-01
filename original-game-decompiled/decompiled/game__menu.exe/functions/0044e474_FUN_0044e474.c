
/* ==== FUN_0044e474 @ 0044e474 ==== 
 * signature: uint __register FUN_0044e474(int param_1, undefined4 param_2, uint param_3)
 * body: 0044e474-0044e499
 */

uint FUN_0044e474(int param_1,undefined4 param_2,uint param_3)

{
  uint local_8;
  
  local_8 = param_3 & 0xffffff00;
  if (*(short *)(param_1 + 0xb2) != 0) {
    param_1 = (**(code **)(param_1 + 0xb0))(*(undefined4 *)(param_1 + 0xb4),param_2,&local_8);
  }
  return CONCAT31((int3)((uint)param_1 >> 8),(undefined1)local_8);
}


