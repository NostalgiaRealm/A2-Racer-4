
/* ==== FUN_00402c68 @ 00402c68 ==== 
 * signature: undefined __register FUN_00402c68(byte * param_1, int * param_2)
 * body: 00402c68-00402d32
 */

void FUN_00402c68(byte *param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  
  pbVar6 = (byte *)0x0;
  if (param_1 == (byte *)0x0) {
LAB_00402ce5:
    pbVar6 = pbVar6 + 1;
  }
  else {
    uVar2 = 0;
    pbVar6 = param_1;
    do {
      pbVar5 = pbVar6;
      bVar3 = *pbVar5;
      pbVar6 = pbVar5 + 1;
    } while (bVar3 == 0x20);
    bVar1 = false;
    if (bVar3 != 0x2d) {
      if (bVar3 == 0x2b) goto LAB_00402cf5;
      if (((bVar3 != 0x24) && (bVar3 != 0x78)) && (bVar3 != 0x58)) {
        if (bVar3 == 0x30) {
          bVar3 = *pbVar6;
          pbVar6 = pbVar5 + 2;
          if ((bVar3 != 0x78) && (bVar3 != 0x58)) goto joined_r0x00402cb2;
          goto LAB_00402cfa;
        }
        goto LAB_00402cb6;
      }
LAB_00402cfa:
      bVar3 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      if (bVar3 == 0) goto LAB_00402ce5;
      do {
        if (0x60 < bVar3) {
          bVar3 = bVar3 - 0x20;
        }
        bVar4 = bVar3 - 0x30;
        if (9 < bVar4) {
          if (5 < (byte)(bVar3 + 0xbf)) goto LAB_00402cee;
          bVar4 = bVar3 - 0x37;
        }
        if (0xfffffff < uVar2) goto LAB_00402cee;
        uVar2 = uVar2 * 0x10 + (uint)bVar4;
        bVar3 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (bVar3 != 0);
      goto LAB_00402cdc;
    }
    bVar1 = true;
LAB_00402cf5:
    bVar3 = *pbVar6;
    pbVar6 = pbVar5 + 2;
LAB_00402cb6:
    if (bVar3 != 0) {
      do {
        if ((9 < (byte)(bVar3 - 0x30)) || (0xccccccc < uVar2)) goto LAB_00402cee;
        uVar2 = uVar2 * 10 + (uint)(byte)(bVar3 - 0x30);
        bVar3 = *pbVar6;
        pbVar6 = pbVar6 + 1;
joined_r0x00402cb2:
      } while (bVar3 != 0);
      if (bVar1) {
        if ((-uVar2 == 0 || 0 < (int)uVar2) || ((int)-uVar2 < 0)) goto LAB_00402cdc;
      }
      else if (-1 < (int)uVar2) {
LAB_00402cdc:
        iVar7 = 0;
        goto LAB_00402cdf;
      }
    }
  }
LAB_00402cee:
  iVar7 = (int)pbVar6 - (int)param_1;
LAB_00402cdf:
  *param_2 = iVar7;
  return;
}


