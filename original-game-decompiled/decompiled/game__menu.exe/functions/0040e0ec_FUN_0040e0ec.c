
/* ==== FUN_0040e0ec @ 0040e0ec ==== 
 * signature: undefined __register FUN_0040e0ec(int * param_1, int param_2, undefined4 * param_3)
 * body: 0040e0ec-0040e128
 */

void FUN_0040e0ec(int *param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_2 + 0x10);
  if (*(undefined4 **)(param_2 + 0x10) == (undefined4 *)0x80000000) {
    puVar2 = param_3;
  }
  pcVar1 = *(code **)(param_2 + 8);
  if (*(byte *)(param_2 + 0xb) != 0xff) {
    if (0xfd < *(byte *)(param_2 + 0xb)) {
      (**(code **)((int)(short)pcVar1 + *param_1))();
      return;
    }
    (*pcVar1)(param_1,puVar2);
    return;
  }
  FUN_0040e0d8((int *)((int)param_1 + ((uint)pcVar1 & 0xffffff)),param_3);
  return;
}


