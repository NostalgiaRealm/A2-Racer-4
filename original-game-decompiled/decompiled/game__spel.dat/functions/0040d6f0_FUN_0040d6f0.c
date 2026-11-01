
/* ==== FUN_0040d6f0 @ 0040d6f0 ==== 
 * signature: undefined4 __cdecl FUN_0040d6f0(int param_1, int param_2)
 * body: 0040d6f0-0040d9c3
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0040d6f0(int param_1,int param_2)

{
  char cVar1;
  void *this;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056989a;
  local_c = ExceptionList;
  local_1c[0] = (undefined1)param_1;
  ExceptionList = &local_c;
  FUN_004028f0(local_1c,'\0');
  local_4 = 0;
  this = (void *)FUN_00406eb0();
  if ((DAT_006fb95c == 0) ||
     ((iVar2 = FUN_00407030(this,param_1), iVar2 == 2 && (DAT_006fb958 != 2)))) {
    local_4 = 0xffffffff;
    FUN_004028f0(local_1c,'\x01');
  }
  else {
    iVar2 = DAT_005d1b38;
    if ((param_2 == DAT_006fba58) && (iVar2 = DAT_005d1b34, DAT_006fb8d4 == 0)) {
      iVar2 = DAT_005d1b30;
    }
    iVar3 = FUN_0040dad0(param_2);
    iVar5 = DAT_006fba58;
    iVar7 = 6;
    piVar4 = &DAT_005cf960;
    do {
      if (*piVar4 == -1) break;
      piVar4 = piVar4 + 0xa5;
      iVar7 = iVar7 + 1;
    } while ((int)piVar4 < 0x5d15bd);
    if ((&DAT_005ce9e8)[iVar7 * 0xa5] == -1) {
      iVar8 = 0;
      piVar4 = &DAT_005cf964;
      do {
        if ((piVar4[0x12] == param_2) && (*piVar4 != 0x19)) {
          iVar8 = iVar8 + 1;
        }
        piVar4 = piVar4 + 0xa5;
      } while ((int)piVar4 < 0x5d15c1);
      if (iVar8 < iVar2) {
        iVar2 = iVar7 * 0x294;
        bVar9 = param_2 == DAT_006fba58;
        (&DAT_005ce9e8)[iVar7 * 0xa5] = param_1;
        (&DAT_005ce9ec)[iVar7 * 0xa5] = 0x18;
        *(int *)(&DAT_005cea34 + iVar2) = param_2;
        if (bVar9) {
          FUN_0041be70(&DAT_005d3118,1,iVar5,-1);
        }
        if (iVar3 == -1) {
          _DAT_006fbab8 = 0x3f800000;
        }
        else {
          *(undefined4 *)(&DAT_005cea60 + iVar3 * 0x294) = 0x3f800000;
        }
        iVar3 = param_1 * 0xf0;
        *(uint *)(iVar3 + 0x1c + DAT_00715e50) = *(uint *)(iVar3 + 0x1c + DAT_00715e50) | 3;
        *(undefined4 *)(iVar3 + 0x50 + DAT_00715e50) =
             *(undefined4 *)(DAT_006fba58 * 0xf0 + 0x50 + DAT_00715e50);
        FUN_00423990(param_1,1);
        iVar5 = FUN_00414070(param_1);
        if (-1 < iVar5) {
          iVar5 = FUN_00414070(param_1);
          (&DAT_005d1bb8)[iVar5 * 0xe] = (&DAT_005d1bb8)[iVar5 * 0xe] | 0x4000;
        }
        *(code **)(iVar3 + 0x6c + DAT_00715e50) = FUN_00407300;
        *(undefined4 *)(iVar3 + 0x60 + DAT_00715e50) = 0;
        *(code **)(iVar3 + 0x70 + DAT_00715e50) = FUN_0042d820;
        puVar6 = FUN_00407730(param_1);
        *(undefined4 **)(&DAT_005cea04 + iVar2) = puVar6;
        *(undefined4 *)(&DAT_005ce9fc + iVar2) = 0;
        *(undefined4 *)(&DAT_005cea00 + iVar2) = 0;
        *(undefined4 *)(&DAT_005cea54 + iVar2) = 0xc0400000;
        iVar5 = FUN_00407030(this,param_1);
        iVar5 = FUN_00406e70(this,iVar5);
        FUN_00403140(&DAT_005cea7c + iVar2,iVar5);
        if (local_18 != 0) {
          cVar1 = *(char *)(local_18 + -1);
          if ((cVar1 != '\0') && (cVar1 != -1)) {
            *(char *)(local_18 + -1) = cVar1 + -1;
            ExceptionList = local_c;
            return 1;
          }
          FUN_0054b339((LPVOID)(local_18 + -1));
        }
        ExceptionList = local_c;
        return 1;
      }
    }
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((LPVOID)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}


