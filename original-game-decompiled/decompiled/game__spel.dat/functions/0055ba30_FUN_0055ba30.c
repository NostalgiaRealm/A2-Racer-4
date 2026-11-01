
/* ==== FUN_0055ba30 @ 0055ba30 ==== 
 * signature: int __cdecl FUN_0055ba30(uint * param_1, uint * param_2, uint param_3)
 * body: 0055ba30-0055badb
 */

int __cdecl FUN_0055ba30(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  uint *puVar7;
  uint *puVar8;
  bool bVar9;
  
  if (param_3 != 0) {
    if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
      uVar2 = param_3 & 3;
      uVar5 = param_3 >> 2;
      bVar9 = false;
      puVar7 = param_1;
      puVar8 = param_2;
      if (uVar5 != 0) {
        do {
          param_1 = puVar7;
          param_2 = puVar8;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          param_2 = puVar8 + 1;
          param_1 = puVar7 + 1;
          bVar9 = *puVar7 == *puVar8;
          puVar7 = param_1;
          puVar8 = param_2;
        } while (bVar9);
        if (!bVar9) {
          uVar2 = param_1[-1];
          uVar5 = param_2[-1];
          bVar9 = (byte)uVar2 < (byte)uVar5;
          if ((((byte)uVar2 == (byte)uVar5) &&
              (bVar4 = (byte)(uVar2 >> 8), bVar6 = (byte)(uVar5 >> 8), bVar9 = bVar4 < bVar6,
              bVar4 == bVar6)) &&
             (bVar4 = (byte)(uVar2 >> 0x10), bVar6 = (byte)(uVar5 >> 0x10), bVar9 = bVar4 < bVar6,
             bVar4 == bVar6)) {
            bVar9 = (byte)(uVar2 >> 0x18) < (byte)(uVar5 >> 0x18);
          }
          goto LAB_0055baaa;
        }
      }
      if (uVar2 != 0) {
        uVar5 = *param_1;
        uVar1 = *param_2;
        bVar9 = (byte)uVar5 < (byte)uVar1;
        if ((byte)uVar5 != (byte)uVar1) {
LAB_0055baaa:
          return (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        }
        iVar3 = 0;
        if (uVar2 != 1) {
          bVar6 = (byte)(uVar5 >> 8);
          bVar4 = (byte)(uVar1 >> 8);
          bVar9 = bVar6 < bVar4;
          if (bVar6 != bVar4) goto LAB_0055baaa;
          iVar3 = 0;
          if (uVar2 != 2) {
            bVar9 = (uVar5 & 0xff0000) < (uVar1 & 0xff0000);
            if ((uVar5 & 0xff0000) != (uVar1 & 0xff0000)) goto LAB_0055baaa;
            iVar3 = uVar2 - 3;
          }
        }
        return iVar3;
      }
    }
    else {
      if ((param_3 & 1) == 0) goto LAB_0055ba5d;
      bVar9 = (byte)*param_1 < (byte)*param_2;
      if ((byte)*param_1 != (byte)*param_2) goto LAB_0055baaa;
      param_1 = (uint *)((int)param_1 + 1);
      param_2 = (uint *)((int)param_2 + 1);
      for (param_3 = param_3 - 1; param_3 != 0; param_3 = param_3 - 2) {
LAB_0055ba5d:
        bVar9 = (byte)*param_1 < (byte)*param_2;
        if (((byte)*param_1 != (byte)*param_2) ||
           (bVar9 = *(byte *)((int)param_1 + 1) < *(byte *)((int)param_2 + 1),
           *(byte *)((int)param_1 + 1) != *(byte *)((int)param_2 + 1))) goto LAB_0055baaa;
        param_2 = (uint *)((int)param_2 + 2);
        param_1 = (uint *)((int)param_1 + 2);
      }
    }
  }
  return 0;
}


