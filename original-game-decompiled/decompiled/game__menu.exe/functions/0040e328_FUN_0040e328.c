
/* ==== FUN_0040e328 @ 0040e328 ==== 
 * signature: undefined __register FUN_0040e328(int * param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * body: 0040e328-0040e362
 */

void FUN_0040e328(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  undefined4 *puVar2;
  
  pcVar1 = *(code **)(param_2 + 8);
  if (*(byte *)(param_2 + 0xb) == 0xff) {
    puVar2 = (undefined4 *)((int)param_1 + ((uint)pcVar1 & 0xffffff));
    *puVar2 = param_4;
    puVar2[1] = param_5;
  }
  else if (*(byte *)(param_2 + 0xb) < 0xfe) {
    (*pcVar1)(param_1,*(undefined4 *)(param_2 + 0x10),pcVar1,param_4,param_5);
  }
  else {
    (**(code **)((int)(short)pcVar1 + *param_1))();
  }
  return;
}


