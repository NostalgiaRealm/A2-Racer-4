
/* ==== FUN_0050bc60 @ 0050bc60 ==== 
 * signature: undefined __thiscall FUN_0050bc60(void * this, int param_1)
 * body: 0050bc60-0050bcda
 */

void __thiscall FUN_0050bc60(void *this,int param_1)

{
  ushort uVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  
  pbVar3 = *(byte **)(param_1 + 8);
  if (pbVar3 != (byte *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar2 = *(ushort *)(pbVar3 + 0x22) - 1;
    if (-1 < iVar2) {
      piVar4 = (int *)(*(int *)(pbVar3 + 0x24) + iVar2 * 4);
      do {
        if (*piVar4 == param_1) break;
        iVar2 = iVar2 + -1;
        piVar4 = piVar4 + -1;
      } while (-1 < iVar2);
    }
    uVar1 = *(ushort *)(pbVar3 + 0x22) - 1;
    *(ushort *)(pbVar3 + 0x22) = uVar1;
    if (iVar2 < (int)(uint)uVar1) {
      do {
        iVar2 = iVar2 + 1;
        *(undefined4 *)(*(int *)(pbVar3 + 0x24) + -4 + iVar2 * 4) =
             *(undefined4 *)(*(int *)(pbVar3 + 0x24) + iVar2 * 4);
      } while (iVar2 < (int)(uint)*(ushort *)(pbVar3 + 0x22));
    }
    for (pbVar3 = (byte *)FUN_0050bbf0(this,pbVar3); pbVar3 != (byte *)0x0;
        pbVar3 = (byte *)FUN_0050bbf0(this,pbVar3)) {
    }
  }
  return;
}


