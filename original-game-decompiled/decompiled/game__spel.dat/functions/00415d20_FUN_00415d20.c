
/* ==== FUN_00415d20 @ 00415d20 ==== 
 * signature: undefined4 __cdecl FUN_00415d20(int param_1)
 * body: 00415d20-00415e31
 */

undefined4 __cdecl FUN_00415d20(int param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 local_68 [23];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00569aea;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0049e180(local_68);
  local_4 = 0;
  iVar4 = param_1 * 0xf0;
  uVar2 = FUN_00407d20(*(int *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50),
                       *(int *)(iVar4 + 0x34 + DAT_00715e50));
  if (DAT_006fb8b0 < (int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f))) {
    cVar1 = FUN_004a1f10(*(int *)(iVar4 + 0x10 + DAT_00715e50));
    if (cVar1 == '\0') {
      *(undefined4 *)(iVar4 + 0x5c + DAT_00715e50) = 0;
      FUN_004f21f0(*(void **)(*(int *)(iVar4 + 0x10 + DAT_00715e50) + 8),0);
    }
  }
  else {
    pcVar3 = (char *)FUN_00414070(param_1);
    if (pcVar3 != (char *)0xffffffff) {
      FUN_00415c60(pcVar3);
      FUN_00415ba0((int)pcVar3);
      if (((&DAT_005d1bb8)[(int)pcVar3 * 0xe] & 0x2000) != 0) {
        FUN_00412e20(param_1);
      }
      FUN_00436510(param_1,1);
    }
  }
  local_4 = 0xffffffff;
  FUN_0049e200(local_68);
  ExceptionList = local_c;
  return 1;
}


