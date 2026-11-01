
/* ==== FUN_00515781 @ 00515781 ==== 
 * signature: undefined4 * __fastcall FUN_00515781(undefined4 param_1, int param_2)
 * body: 00515781-00515783
 */

undefined4 * __fastcall FUN_00515781(undefined4 param_1,int param_2)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  undefined4 in_EAX;
  undefined4 *puVar4;
  char *unaff_EDI;
  
  cVar3 = (char)in_EAX + 'Q';
  *unaff_EDI = *unaff_EDI + cVar3;
  unaff_EDI[param_2 * 2] = unaff_EDI[param_2 * 2] + 'V';
  cRamce005156 = cRamce005156 + (char)param_2;
  pcVar1 = (char *)(CONCAT31((int3)((uint)in_EAX >> 8),cVar3) + 0x53909090);
  *pcVar1 = *pcVar1 + (char)param_2;
  puVar4 = (undefined4 *)0xce00515a;
  piVar2 = piRamce00515a;
  while (piVar2 != (int *)0x0) {
    puVar4 = puVar4 + 1;
    if ((piVar2[5] & 0x10000000U) == 0) {
      FUN_005165b0(piVar2);
      FUN_00514ed0(piVar2);
    }
    piVar2 = (int *)*puVar4;
  }
  puVar4 = FUN_005162f0();
  puVar4[0xd] = 0xce005156;
  puVar4[0x14] = puVar4[0x14] & 0xfffff7ff;
  FUN_00514020(puVar4 + 0xf,(int)unaff_EDI);
  FUN_00514e50((int)puVar4);
  return puVar4;
}


