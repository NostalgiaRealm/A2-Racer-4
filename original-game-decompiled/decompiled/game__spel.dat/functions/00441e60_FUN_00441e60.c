
/* ==== FUN_00441e60 @ 00441e60 ==== 
 * signature: undefined __thiscall FUN_00441e60(void * this, int param_1, int param_2, int param_3, int param_4, uint param_5, ushort param_6)
 * body: 00441e60-00441f2c
 */

void __thiscall
FUN_00441e60(void *this,int param_1,int param_2,int param_3,int param_4,uint param_5,ushort param_6)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = -4;
  iVar1 = param_4 >> 1;
  iVar6 = *(int *)(DAT_0073b1b0 + 0x28 + *(int *)((int)this + 4) * 0x48) * iVar1 +
          *(int *)(DAT_0073b1b0 + *(int *)((int)this + 4) * 0x48 + 0x24);
  do {
    iVar7 = 8;
    iVar2 = param_1 + (param_2 + -4) * iVar1 + iVar5;
    puVar3 = (ushort *)(param_3 + iVar2 * 2);
    do {
      if (((-1 < iVar2) && (iVar2 < iVar6)) && (*puVar3 != param_5)) {
        *puVar3 = param_6;
      }
      puVar3 = puVar3 + iVar1;
      iVar2 = iVar2 + iVar1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  iVar5 = -2;
  do {
    iVar7 = 4;
    iVar2 = (param_2 + -2) * iVar1 + iVar5 + param_1;
    puVar4 = (undefined2 *)(param_3 + iVar2 * 2);
    do {
      if ((-1 < iVar2) && (iVar2 < iVar6)) {
        *puVar4 = (undefined2)param_5;
      }
      puVar4 = puVar4 + iVar1;
      iVar2 = iVar2 + iVar1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  return;
}


