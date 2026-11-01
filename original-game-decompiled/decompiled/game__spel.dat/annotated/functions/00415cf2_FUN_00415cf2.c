
/* ==== FUN_00415cf2 @ 00415cf2 ==== 
 * signature: undefined4 __fastcall FUN_00415cf2(int param_1, int param_2)
 * body: 00415cf2-00415cf3
 */

/* WARNING: Unable to track spacebase fully for stack */

undefined4 __fastcall FUN_00415cf2(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  void *this;
  undefined4 *puVar3;
  char cVar4;
  int in_EAX;
  uint uVar5;
  int iVar6;
  int unaff_EBX;
  undefined4 unaff_ESI;
  int iVar7;
  undefined4 unaff_EDI;
  char in_CF;
  undefined4 *unaff_retaddr;
  
  pcVar1 = (char *)(param_1 + in_EAX * 2);
  *pcVar1 = (*pcVar1 + 'b') - in_CF;
  *(char *)(in_EAX + -0x4dffbea4) =
       *(char *)(in_EAX + -0x4dffbea4) + (char)((uint)(param_1 + 1) >> 8);
  puVar3 = (undefined4 *)*unaff_retaddr;
  pcVar1 = (char *)((int)puVar3 + unaff_EBX * 2 + 0x5cc60041);
  *pcVar1 = *pcVar1 + (char)((uint)unaff_EBX >> 8);
  puVar3 = (undefined4 *)*puVar3;
  *(char *)(param_2 + -0x75ffbea4) = *(char *)(param_2 + -0x75ffbea4) + (char)param_1 + '\x04';
  puVar3 = (undefined4 *)*puVar3;
  pcVar1 = (char *)((int)puVar3 + unaff_EBX * 2 + 0x5c940041);
  *pcVar1 = *pcVar1 + (char)param_2;
  *(char *)(param_2 + -1) = *(char *)(param_2 + -1) + (char)((uint)(param_1 + 6) >> 8);
  puVar3[-1] = FUN_00569aea;
  puVar3[-2] = ExceptionList;
  ExceptionList = puVar3 + -2;
  puVar3[-0x1a] = unaff_ESI;
  puVar3[-0x1b] = unaff_EDI;
  puVar3[-0x1c] = 0x415d43;
  FUN_0049e180(puVar3 + -0x19);
  iVar6 = DAT_00715e50;
  iVar2 = puVar3[2];
  *puVar3 = 0;
  iVar7 = iVar2 * 0xf0;
  puVar3[-0x1c] = *(undefined4 *)(iVar7 + 0x34 + iVar6);
  puVar3[-0x1d] = *(undefined4 *)(DAT_006fba58 * 0xf0 + 0x34 + iVar6);
  puVar3[-0x1e] = 0x415d7b;
  uVar5 = FUN_00407d20(puVar3[-0x1d],puVar3[-0x1c]);
  if (DAT_006fb8b0 < (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) {
    iVar2 = *(int *)(iVar7 + 0x10 + DAT_00715e50);
    puVar3[-0x1c] = 0x415d9c;
    cVar4 = FUN_004a1f10(iVar2);
    iVar2 = DAT_00715e50;
    if (cVar4 == '\0') {
      puVar3[-0x1c] = 0;
      *(undefined4 *)(iVar7 + 0x5c + iVar2) = 0;
      this = *(void **)(*(int *)(iVar7 + 0x10 + DAT_00715e50) + 8);
      puVar3[-0x1d] = 0x415dc1;
      FUN_004f21f0(this,puVar3[-0x1c]);
    }
  }
  else {
    puVar3[-0x1c] = iVar2;
    puVar3[-0x1d] = 0x415dc9;
    iVar6 = FUN_00414070(puVar3[-0x1c]);
    if (iVar6 != -1) {
      puVar3[-0x1c] = iVar6;
      puVar3[-0x1d] = 0x415dd9;
      FUN_00415c60((char *)puVar3[-0x1c]);
      puVar3[-0x1d] = iVar6;
      puVar3[-0x1e] = 0x415ddf;
      FUN_00415ba0(puVar3[-0x1d]);
      if (((&DAT_005d1bb8)[iVar6 * 0xe] & 0x2000) != 0) {
        puVar3[-0x1c] = iVar2;
        puVar3[-0x1d] = 0x415dfd;
        FUN_00412e20(puVar3[-0x1c]);
      }
      puVar3[-0x1c] = 1;
      puVar3[-0x1d] = iVar2;
      puVar3[-0x1e] = 0x415e08;
      FUN_00436510(puVar3[-0x1d],puVar3[-0x1c]);
    }
  }
  *puVar3 = 0xffffffff;
  puVar3[-0x1c] = 0x415e1c;
  FUN_0049e200(puVar3 + -0x19);
  ExceptionList = (void *)puVar3[-2];
  return 1;
}


