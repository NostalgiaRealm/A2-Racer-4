
/* ==== FUN_00457298 @ 00457298 ==== 
 * signature: undefined __register FUN_00457298(int * param_1)
 * body: 00457298-00457307
 */

void FUN_00457298(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  int local_404 [256];
  
  bVar5 = 0;
  uVar1 = FUN_00408298(param_1 + 0x25,(int *)(param_1[9] + 0x15),0x400);
  if ((char)uVar1 == '\0') {
    piVar3 = param_1 + 0x25;
    piVar4 = local_404;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
      piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
    }
    FUN_00456660(param_1,1,0);
    piVar3 = local_404;
    piVar4 = param_1 + 0x25;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
      piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
    }
    FUN_00455f14(param_1[9],param_1 + 0x25);
    *(undefined1 *)((int)param_1 + 0x1a) = 1;
  }
  return;
}


