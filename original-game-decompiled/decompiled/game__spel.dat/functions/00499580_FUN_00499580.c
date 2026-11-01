
/* ==== FUN_00499580 @ 00499580 ==== 
 * signature: undefined __thiscall FUN_00499580(void * this, undefined1 * param_1)
 * body: 00499580-004997bd
 */

void __thiscall FUN_00499580(void *this,undefined1 *param_1)

{
  void *this_00;
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  LPCSTR lpAppName;
  BOOL BVar5;
  LPCSTR lpKeyName;
  LPCSTR lpString;
  undefined4 unaff_EBX;
  char *pcVar6;
  LPCSTR lpFileName;
  int iStack_a4;
  void *local_a0 [5];
  undefined1 local_8c [16];
  undefined1 local_7c [16];
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056e590;
  local_c = ExceptionList;
  this_00 = (void *)((int)this + 4);
  ExceptionList = &local_c;
  local_a0[0] = this_00;
  uVar2 = FUN_00483e70(this_00,&DAT_007127fc);
  if (uVar2 != 0) {
    uVar2 = FUN_00483e70((void *)((int)this + 0x24),&DAT_00712800);
    if (uVar2 == 0) {
      uVar2 = 0xffffffff;
      pcVar6 = s_Undefined_005ae494;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_00402940((void *)((int)this + 0x24),(undefined4 *)s_Undefined_005ae494,~uVar2 - 1);
    }
    uVar2 = 0xffffffff;
    pcVar6 = &DAT_00712804;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar2 = FUN_0040fc80((void *)((int)this + 0x14),0,*(uint *)((int)this + 0x1c),&DAT_00712804,
                         ~uVar2 - 1);
    if (uVar2 == 0) {
      uVar2 = 0xffffffff;
      pcVar6 = s_Undefined_005ae4a0;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_00402940((void *)((int)this + 0x14),(undefined4 *)s_Undefined_005ae4a0,~uVar2 - 1);
    }
    puVar3 = FUN_0047c9a0(local_7c,param_1,(int)this_00);
    local_4 = 0;
    lpFileName = "";
    if (*(LPCSTR *)(puVar3 + 4) != (LPCSTR)0x0) {
      lpFileName = *(LPCSTR *)(puVar3 + 4);
    }
    iVar4 = (**(code **)(*(int *)this + 8))(local_8c);
    lpString = "";
    if (*(LPCSTR *)(iVar4 + 4) != (LPCSTR)0x0) {
      lpString = *(LPCSTR *)(iVar4 + 4);
    }
    lpKeyName = *(LPCSTR *)((int)this + 0x28);
    if (lpKeyName == (LPCSTR)0x0) {
      lpKeyName = "";
    }
    lpAppName = *(LPCSTR *)((int)this + 0x18);
    if (lpAppName == (LPCSTR)0x0) {
      lpAppName = "";
    }
    BVar5 = WritePrivateProfileStringA(lpAppName,lpKeyName,lpString,lpFileName);
    FUN_004028f0(local_8c,'\x01');
    local_4 = 0xffffffff;
    FUN_004028f0(local_7c,'\x01');
    if (BVar5 == 0) {
      iVar4 = (**(code **)(*(int *)this + 8))(auStack_6c);
      pcStack_8 = (code *)0x1;
      puVar3 = FUN_004797e0(auStack_50,s_Couldn_t_write_>_005ae4c8,iVar4);
      pcStack_8._0_1_ = 2;
      puVar3 = FUN_004796b0(auStack_30,puVar3,s_<_to_file_005ae4bc);
      pcStack_8._0_1_ = 3;
      puVar3 = FUN_0047c9a0(auStack_60,puVar3,(int)param_1);
      pcStack_8._0_1_ = 4;
      puVar3 = FUN_0047c9a0(auStack_40,puVar3,iStack_a4);
      pcStack_8._0_1_ = 5;
      puVar3 = FUN_004796b0(auStack_20,puVar3,s_in_WriteToIni_005ae4ac);
      local_a0[0] = (void *)CONCAT31(local_a0[0]._1_3_,(char)((uint)unaff_EBX >> 0x18));
      pcStack_8._0_1_ = 6;
      FUN_004028f0(local_a0,'\0');
      pcStack_8._0_1_ = 7;
      FUN_004093c0(local_a0,puVar3,0,0xffffffff);
      pcStack_8 = (code *)CONCAT31(pcStack_8._1_3_,6);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_a0,&DAT_005828d8);
    }
  }
  ExceptionList = local_c;
  return;
}


