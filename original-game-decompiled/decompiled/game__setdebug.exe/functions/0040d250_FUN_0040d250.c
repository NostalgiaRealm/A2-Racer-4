
/* ==== FUN_0040d250 @ 0040d250 ==== 
 * signature: undefined __register FUN_0040d250(int * param_1, int param_2, undefined4 * param_3)
 * body: 0040d250-0040d284
 */

void FUN_0040d250(int *param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  pcVar1 = *(code **)(param_2 + 8);
  if (*(byte *)(param_2 + 0xb) == 0xff) {
    puVar3 = (undefined4 *)((int)param_1 + ((uint)pcVar1 & 0xffffff));
    uVar2 = param_3[1];
    *puVar3 = *param_3;
    puVar3[1] = uVar2;
    return;
  }
  if (0xfd < *(byte *)(param_2 + 0xb)) {
    (**(code **)((int)(short)pcVar1 + *param_1))();
    return;
  }
  (*pcVar1)(param_1,*(undefined4 *)(param_2 + 0x10),param_3,*param_3,param_3[1]);
  return;
}


