
/* ==== FUN_0055cc7e @ 0055cc7e ==== 
 * signature: undefined __cdecl FUN_0055cc7e(byte * param_1, int param_2, byte * param_3, uint * param_4, int param_5)
 * body: 0055cc7e-0055cf4c
 */

void __cdecl FUN_0055cc7e(byte *param_1,int param_2,byte *param_3,uint *param_4,int param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint *puVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  
  puVar3 = param_4;
  pbVar2 = param_3;
  bVar1 = *param_1;
  do {
    if ((bVar1 == 0) || (*puVar3 == 0)) {
      return;
    }
    DAT_007503cc = 0;
    bVar1 = *param_1;
    uVar7 = 0;
    pbVar5 = param_1 + 1;
    do {
      param_3 = pbVar5;
      uVar6 = uVar7;
      uVar7 = uVar6 + 1;
      pbVar5 = param_3 + 1;
    } while (*param_3 == bVar1);
    if ((char)bVar1 < 'e') {
      if (bVar1 == 100) {
        if (uVar6 == 0) {
          DAT_007503cc = 1;
        }
        else if (uVar6 != 1) {
          if (uVar6 == 2) {
            param_4._0_1_ = 'a';
          }
          else {
            if (uVar6 != 3) goto LAB_0055cd02;
            param_4._0_1_ = 'A';
          }
          goto LAB_0055cf38;
        }
        param_4._0_1_ = 'd';
        goto LAB_0055cf38;
      }
      if (bVar1 != 0x27) {
        if (bVar1 != 0x41) {
          if (bVar1 == 0x48) {
            if (uVar6 == 0) {
              DAT_007503cc = 1;
            }
            else if (uVar7 != 2) goto LAB_0055cd02;
            param_4._0_1_ = 'H';
            goto LAB_0055cf38;
          }
          if (bVar1 == 0x4d) {
            if (uVar6 == 0) {
              DAT_007503cc = 1;
            }
            else if (uVar6 != 1) {
              if (uVar6 == 2) {
                param_4._0_1_ = 'b';
              }
              else {
                if (uVar6 != 3) goto LAB_0055cd02;
                param_4._0_1_ = 'B';
              }
              goto LAB_0055cf38;
            }
            param_4._0_1_ = 'm';
            goto LAB_0055cf38;
          }
          if (bVar1 != 0x61) goto LAB_0055cd02;
        }
        iVar4 = __strcmpi((char *)param_1,"am/pm");
        if (iVar4 == 0) {
          param_3 = param_1 + 5;
        }
        else {
          iVar4 = __strcmpi((char *)param_1,(char *)&PTR_DAT_005797bc);
          if (iVar4 == 0) {
            param_3 = param_1 + 3;
          }
        }
        param_4._0_1_ = 'p';
        goto LAB_0055cf38;
      }
      if ((uVar7 & 1) == 0) {
        param_3 = param_1 + uVar7;
      }
      else {
        param_3 = param_1 + uVar7;
        while( true ) {
          bVar1 = *param_3;
          if ((bVar1 == 0) || (*puVar3 == 0)) goto LAB_0055cd28;
          if (bVar1 == 0x27) break;
          if (((PTR_DAT_005c8384[(uint)bVar1 * 2 + 1] & 0x80) != 0) && (1 < *puVar3)) {
            **(byte **)pbVar2 = bVar1;
            *(int *)pbVar2 = *(int *)pbVar2 + 1;
            param_3 = param_3 + 1;
            *puVar3 = *puVar3 - 1;
          }
          **(byte **)pbVar2 = *param_3;
          *(int *)pbVar2 = *(int *)pbVar2 + 1;
          param_3 = param_3 + 1;
          *puVar3 = *puVar3 - 1;
        }
        param_3 = param_3 + 1;
      }
    }
    else {
      if (bVar1 == 0x68) {
        if (uVar6 == 0) {
          DAT_007503cc = 1;
        }
        else if (uVar7 != 2) goto LAB_0055cd02;
        param_4._0_1_ = 'I';
      }
      else if (bVar1 == 0x6d) {
        if (uVar6 == 0) {
          DAT_007503cc = 1;
        }
        else if (uVar7 != 2) goto LAB_0055cd02;
        param_4._0_1_ = 'M';
      }
      else if (bVar1 == 0x73) {
        if (uVar6 == 0) {
          DAT_007503cc = 1;
        }
        else if (uVar7 != 2) goto LAB_0055cd02;
        param_4._0_1_ = 'S';
      }
      else {
        if (bVar1 == 0x74) {
          if (*(int *)(param_2 + 8) < 0xc) {
            pbVar5 = *(byte **)(param_5 + 0x98);
          }
          else {
            pbVar5 = *(byte **)(param_5 + 0x9c);
          }
          while ((0 < (int)uVar7 && (*puVar3 != 0))) {
            if (((PTR_DAT_005c8384[(uint)*pbVar5 * 2 + 1] & 0x80) != 0) && (1 < *puVar3)) {
              **(byte **)pbVar2 = *pbVar5;
              *(int *)pbVar2 = *(int *)pbVar2 + 1;
              pbVar5 = pbVar5 + 1;
              *puVar3 = *puVar3 - 1;
            }
            **(byte **)pbVar2 = *pbVar5;
            *(int *)pbVar2 = *(int *)pbVar2 + 1;
            pbVar5 = pbVar5 + 1;
            *puVar3 = *puVar3 - 1;
            uVar7 = uVar7 - 1;
          }
          goto LAB_0055cd28;
        }
        if (bVar1 != 0x79) {
LAB_0055cd02:
          if ((PTR_DAT_005c8384[(uint)bVar1 * 2 + 1] & 0x80) != 0) {
            **(byte **)pbVar2 = bVar1;
            *(int *)pbVar2 = *(int *)pbVar2 + 1;
            *puVar3 = *puVar3 - 1;
            param_1 = param_1 + 1;
          }
          **(byte **)pbVar2 = *param_1;
          *(int *)pbVar2 = *(int *)pbVar2 + 1;
          param_3 = param_1 + 1;
          *puVar3 = *puVar3 - 1;
          goto LAB_0055cd28;
        }
        if (uVar6 == 1) {
          param_4._0_1_ = 'y';
        }
        else {
          if (uVar6 != 3) goto LAB_0055cd02;
          param_4._0_1_ = 'Y';
        }
      }
LAB_0055cf38:
      FUN_0055c7b0((char)param_4,(int *)param_2,pbVar2,puVar3,param_5);
    }
LAB_0055cd28:
    bVar1 = *param_3;
    param_1 = param_3;
  } while( true );
}


