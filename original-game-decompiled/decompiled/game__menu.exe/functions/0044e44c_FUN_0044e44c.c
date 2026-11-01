
/* ==== FUN_0044e44c @ 0044e44c ==== 
 * signature: uint __register FUN_0044e44c(int param_1, undefined4 param_2, uint param_3)
 * body: 0044e44c-0044e471
 */

uint FUN_0044e44c(int param_1,undefined4 param_2,uint param_3)

{
  uint local_8;
  
  local_8 = param_3 & 0xffffff00;
  if (*(short *)(param_1 + 0xaa) != 0) {
    param_1 = (**(code **)(param_1 + 0xa8))(*(undefined4 *)(param_1 + 0xac),param_2,&local_8);
  }
  return CONCAT31((int3)((uint)param_1 >> 8),(undefined1)local_8);
}


