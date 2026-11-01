
/* ==== FUN_0040dff4 @ 0040dff4 ==== 
 * signature: undefined __register FUN_0040dff4(int * param_1, undefined4 * param_2, int param_3)
 * body: 0040dff4-0040e04e
 */

void FUN_0040dff4(int *param_1,undefined4 *param_2,int param_3)

{
  char *pcVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  
  pcVar1 = *(char **)*param_2;
  bVar5 = 4;
  if (*pcVar1 != '\a') {
    bVar5 = pcVar1[(byte)pcVar1[1] + 2];
  }
  iVar4 = param_2[4];
  if (param_2[4] == -0x80000000) {
    iVar4 = param_3;
  }
  pcVar2 = (code *)param_2[2];
  if (*(byte *)((int)param_2 + 0xb) == 0xff) {
    piVar3 = (int *)((int)param_1 + ((uint)pcVar2 & 0xffffff));
    *(char *)piVar3 = (char)param_3;
    if ((1 < bVar5) && (*(short *)piVar3 = (short)param_3, 3 < bVar5)) {
      *piVar3 = param_3;
    }
  }
  else if (*(byte *)((int)param_2 + 0xb) < 0xfe) {
    (*pcVar2)(param_1,iVar4);
  }
  else {
    (**(code **)((int)(short)pcVar2 + *param_1))();
  }
  return;
}


