
/* ==== FUN_00448c00 @ 00448c00 ==== 
 * signature: int __thiscall FUN_00448c00(void * this, byte * param_1)
 * body: 00448c00-00448c84
 */

int __thiscall FUN_00448c00(void *this,byte *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = 0;
  iVar2 = (*(code *)**(undefined4 **)((int)this + 0x10))();
  if (0 < iVar2) {
    do {
      puVar3 = (undefined4 *)**(undefined4 **)((int)this + 0x18);
      iVar2 = iVar6;
      if (0 < iVar6) {
        do {
          puVar3 = (undefined4 *)*puVar3;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      pbVar4 = *(byte **)(puVar3[2] + 4);
      pbVar5 = param_1;
      if (pbVar4 == (byte *)0x0) {
        pbVar4 = &DAT_0057629c;
      }
      do {
        bVar1 = *pbVar4;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00448c5d:
          iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_00448c62;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00448c5d;
        pbVar4 = pbVar4 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_00448c62:
      if (iVar2 == 0) {
        return iVar6;
      }
      iVar6 = iVar6 + 1;
      iVar2 = (*(code *)**(undefined4 **)((int)this + 0x10))();
    } while (iVar6 < iVar2);
  }
  return -1;
}


