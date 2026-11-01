
/* ==== FUN_0054dffe @ 0054dffe ==== 
 * signature: int __cdecl FUN_0054dffe(byte * param_1, undefined4 * param_2, int * param_3)
 * body: 0054dffe-0054e2e9
 */

int __cdecl FUN_0054dffe(byte *param_1,undefined4 *param_2,int *param_3)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  int local_c;
  int local_8;
  
  piVar4 = (int *)FUN_0054e63e();
  uVar5 = FUN_0054e9af(param_2,param_3);
  pbVar9 = param_1;
  if ((char)uVar5 == '\0') {
    if (*(char *)(param_2 + 1) == '\0') {
      Peek(param_2);
    }
    if (*(char *)((int)param_2 + 5) == '+') {
      *param_1 = 0x2b;
    }
    else {
      if (*(char *)(param_2 + 1) == '\0') {
        Peek(param_2);
      }
      if (*(char *)((int)param_2 + 5) != '-') goto LAB_0054e069;
      *param_1 = 0x2d;
    }
    FUN_0054e379(param_2);
    pbVar9 = param_1 + 1;
  }
LAB_0054e069:
  bVar2 = false;
  uVar5 = FUN_0054e9af(param_2,param_3);
  if ((char)uVar5 == '\0') {
    do {
      if (*(char *)(param_2 + 1) == '\0') {
        Peek(param_2);
      }
      if (*(char *)((int)param_2 + 5) != '0') break;
      bVar2 = true;
      FUN_0054e379(param_2);
      uVar5 = FUN_0054e9af(param_2,param_3);
    } while ((char)uVar5 == '\0');
    if (bVar2) {
      *pbVar9 = 0x30;
      pbVar9 = pbVar9 + 1;
    }
  }
  local_c = 0;
  local_8 = 0;
  while( true ) {
    uVar5 = FUN_0054e9af(param_2,param_3);
    if ((char)uVar5 != '\0') break;
    if (*(char *)(param_2 + 1) == '\0') {
      Peek(param_2);
    }
    bVar1 = *(byte *)((int)param_2 + 5);
    *pbVar9 = bVar1;
    uVar6 = FUN_0054e965(bVar1);
    if ((char)uVar6 == '\0') break;
    if (local_c < 0x24) {
      pbVar9 = pbVar9 + 1;
      local_c = local_c + 1;
    }
    else {
      local_8 = local_8 + 1;
    }
    bVar2 = true;
    FUN_0054e379(param_2);
  }
  uVar5 = FUN_0054e9af(param_2,param_3);
  if ((char)uVar5 == '\0') {
    if (*(char *)(param_2 + 1) == '\0') {
      Peek(param_2);
    }
    cVar3 = (**(code **)(*piVar4 + 4))();
    if (*(char *)((int)param_2 + 5) == cVar3) {
      puVar7 = (undefined4 *)FUN_0055a6b0();
      *pbVar9 = *(byte *)*puVar7;
      pbVar9 = pbVar9 + 1;
      FUN_0054e379(param_2);
    }
  }
  if (local_c == 0) {
    while( true ) {
      uVar5 = FUN_0054e9af(param_2,param_3);
      if ((char)uVar5 != '\0') break;
      if (*(char *)(param_2 + 1) == '\0') {
        Peek(param_2);
      }
      if (*(char *)((int)param_2 + 5) != '0') break;
      local_8 = local_8 + -1;
      bVar2 = true;
      FUN_0054e379(param_2);
    }
    if (local_8 < 0) {
      *pbVar9 = 0x30;
      pbVar9 = pbVar9 + 1;
      local_8 = local_8 + 1;
    }
  }
  while( true ) {
    uVar5 = FUN_0054e9af(param_2,param_3);
    if ((char)uVar5 != '\0') break;
    if (*(char *)(param_2 + 1) == '\0') {
      Peek(param_2);
    }
    bVar1 = *(byte *)((int)param_2 + 5);
    *pbVar9 = bVar1;
    uVar6 = FUN_0054e965(bVar1);
    if ((char)uVar6 == '\0') break;
    if (local_c < 0x24) {
      pbVar9 = pbVar9 + 1;
      local_c = local_c + 1;
    }
    bVar2 = true;
    FUN_0054e379(param_2);
  }
  if (bVar2) {
    uVar5 = FUN_0054e9af(param_2,param_3);
    bVar2 = true;
    pbVar10 = pbVar9;
    if ((char)uVar5 == '\0') {
      if (*(char *)(param_2 + 1) == '\0') {
        Peek(param_2);
      }
      if (*(char *)((int)param_2 + 5) != 'e') {
        if (*(char *)(param_2 + 1) == '\0') {
          Peek(param_2);
        }
        if (*(char *)((int)param_2 + 5) != 'E') goto LAB_0054e2d6;
      }
      *pbVar9 = 0x65;
      pbVar10 = pbVar9 + 1;
      FUN_0054e379(param_2);
      bVar2 = false;
      iVar8 = 0;
      uVar5 = FUN_0054e9af(param_2,param_3);
      if ((char)uVar5 == '\0') {
        if (*(char *)(param_2 + 1) == '\0') {
          Peek(param_2);
        }
        if (*(char *)((int)param_2 + 5) == '+') {
          *pbVar10 = 0x2b;
        }
        else {
          if (*(char *)(param_2 + 1) == '\0') {
            Peek(param_2);
          }
          if (*(char *)((int)param_2 + 5) != '-') goto LAB_0054e250;
          *pbVar10 = 0x2d;
        }
        pbVar10 = pbVar9 + 2;
        FUN_0054e379(param_2);
      }
LAB_0054e250:
      uVar5 = FUN_0054e9af(param_2,param_3);
      if ((char)uVar5 == '\0') {
        do {
          if (*(char *)(param_2 + 1) == '\0') {
            Peek(param_2);
          }
          if (*(char *)((int)param_2 + 5) != '0') break;
          bVar2 = true;
          FUN_0054e379(param_2);
          uVar5 = FUN_0054e9af(param_2,param_3);
        } while ((char)uVar5 == '\0');
        if (bVar2) {
          *pbVar10 = 0x30;
          pbVar10 = pbVar10 + 1;
        }
      }
      while( true ) {
        uVar5 = FUN_0054e9af(param_2,param_3);
        if ((char)uVar5 != '\0') break;
        if (*(char *)(param_2 + 1) == '\0') {
          Peek(param_2);
        }
        bVar1 = *(byte *)((int)param_2 + 5);
        *pbVar10 = bVar1;
        uVar6 = FUN_0054e965(bVar1);
        if ((char)uVar6 == '\0') break;
        if (iVar8 < 8) {
          pbVar10 = pbVar10 + 1;
          iVar8 = iVar8 + 1;
        }
        bVar2 = true;
        FUN_0054e379(param_2);
      }
    }
LAB_0054e2d6:
    if (bVar2) goto LAB_0054e2df;
  }
  pbVar10 = param_1;
LAB_0054e2df:
  *pbVar10 = 0;
  return local_8;
}


