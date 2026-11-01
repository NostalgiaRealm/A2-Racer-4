
/* ==== FUN_00499960 @ 00499960 ==== 
 * signature: undefined4 __thiscall FUN_00499960(void * this, undefined1 * param_1)
 * body: 00499960-00499b20
 */

uint __thiscall FUN_00499960(void *this,undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  LPCSTR lpAppName;
  DWORD DVar4;
  undefined4 uVar5;
  uint uVar6;
  LPCSTR lpKeyName;
  LPCSTR lpFileName;
  uint *puVar7;
  char *pcVar8;
  uint *puVar9;
  undefined1 local_160 [4];
  uint *local_15c;
  uint local_158;
  undefined4 local_154;
  int *local_150;
  undefined1 local_14c [4];
  int local_148;
  uint local_13c [76];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056e5b7;
  local_c = ExceptionList;
  uVar6 = 0xffffffff;
  pcVar8 = &DAT_0071280c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  local_150 = this;
  uVar2 = FUN_0040fc80((void *)((int)this + 4),0,*(uint *)((int)this + 0xc),&DAT_0071280c,~uVar6 - 1
                      );
  uVar6 = 0;
  if (uVar2 != 0) {
    puVar3 = FUN_0047c9a0(local_14c,param_1,(int)this + 4);
    lpFileName = "";
    if (*(LPCSTR *)(puVar3 + 4) != (LPCSTR)0x0) {
      lpFileName = *(LPCSTR *)(puVar3 + 4);
    }
    lpKeyName = *(LPCSTR *)((int)this + 0x28);
    if (lpKeyName == (LPCSTR)0x0) {
      lpKeyName = "";
    }
    lpAppName = *(LPCSTR *)((int)this + 0x18);
    if (lpAppName == (LPCSTR)0x0) {
      lpAppName = "";
    }
    DVar4 = GetPrivateProfileStringA
                      (lpAppName,lpKeyName,&DAT_00712810,(LPSTR)local_13c,300,lpFileName);
    uVar6 = 0;
    if (local_148 != 0) {
      cVar1 = *(char *)(local_148 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        uVar6 = FUN_0054b339((char *)(local_148 + -1));
      }
      else {
        uVar6 = CONCAT31((int3)((uint)local_148 >> 8),cVar1 + -1);
        *(char *)(local_148 + -1) = cVar1 + -1;
      }
    }
    if (DVar4 != 0) {
      if (*(char *)((int)this + 0x34) != '\0') {
        FUN_005690b0(local_13c);
      }
      uVar6 = 0;
      do {
        if (*(char *)((int)local_13c + uVar6) == '\0') break;
        if (*(char *)((int)local_13c + uVar6) == ';') {
          *(undefined1 *)((int)local_13c + uVar6) = 0;
          break;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < 300);
      if (0 < (int)uVar6) {
        uVar6 = 0xffffffff;
        puVar7 = local_13c;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          uVar2 = *puVar7;
          puVar7 = (uint *)((int)puVar7 + 1);
        } while ((char)uVar2 != '\0');
        uVar6 = ~uVar6 - 1;
        local_15c = (uint *)0x0;
        local_158 = 0;
        local_154 = 0;
        uVar5 = FUN_00402a00(local_160,uVar6,'\x01');
        if ((char)uVar5 != '\0') {
          puVar7 = local_13c;
          puVar9 = local_15c;
          for (uVar2 = uVar6 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar2 = uVar6 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(char *)puVar9 = (char)*puVar7;
            puVar7 = (uint *)((int)puVar7 + 1);
            puVar9 = (uint *)((int)puVar9 + 1);
          }
          *(undefined1 *)((int)local_15c + uVar6) = 0;
          local_158 = uVar6;
        }
        local_4 = 0;
        (**(code **)(*local_150 + 4))(local_160);
        uVar5 = 0;
        if (local_15c != (uint *)0x0) {
          cVar1 = *(char *)((int)local_15c + -1);
          if ((cVar1 != '\0') && (cVar1 != -1)) {
            *(char *)((int)local_15c + -1) = cVar1 + -1;
            ExceptionList = local_c;
            return CONCAT31((int3)((uint)local_15c >> 8),1);
          }
          uVar5 = FUN_0054b339((char *)((int)local_15c + -1));
        }
        ExceptionList = local_c;
        return CONCAT31((int3)((uint)uVar5 >> 8),1);
      }
    }
  }
  ExceptionList = local_c;
  return uVar6 & 0xffffff00;
}


