
/* ==== FUN_004e880a @ 004e880a ==== 
 * signature: byte * __fastcall FUN_004e880a(int param_1, int param_2, void * param_3)
 * body: 004e880a-004e880b
 */

/* WARNING: Variable defined which should be unmapped: param_3 */

byte * __fastcall FUN_004e880a(int param_1,int param_2,void *param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 in_EAX;
  void *extraout_ECX;
  uint uVar6;
  void *pvVar7;
  undefined3 uVar9;
  int iVar8;
  byte *unaff_EBX;
  uint unaff_EBP;
  undefined4 *puVar10;
  int unaff_ESI;
  uint *puVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  char *pcVar14;
  uint unaff_EDI;
  char in_CF;
  uint unaff_retaddr;
  
  *(char *)(param_2 + -0x7d99ffb2) = (*(char *)(param_2 + -0x7d99ffb2) - (char)in_EAX) - in_CF;
  puVar11 = (uint *)(unaff_ESI + -1);
  *unaff_EBX = *unaff_EBX + (char)param_1;
  *puVar11 = *puVar11 | 0x42;
  *puVar11 = *puVar11 | 0xffffffd4;
  *(byte *)puVar11 = *(byte *)puVar11 | 0x9d;
  *(byte *)puVar11 = *(byte *)puVar11 | 0x79;
  *puVar11 = *puVar11 | 0xffffffd3;
  *puVar11 = *puVar11 | 10;
  pvVar7 = (void *)(param_1 + 1);
  if ((char)(*(byte *)puVar11 & (byte)pvVar7) < '\0') {
    uVar5 = FUN_00402a00(pvVar7,unaff_retaddr,(char)param_3);
    if ((char)uVar5 != '\0') {
      puVar10 = (undefined4 *)&DAT_005b76c4;
      puVar13 = *(undefined4 **)(unaff_EBX + 4);
      for (uVar6 = unaff_EBP >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar13 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
      }
      for (uVar6 = unaff_EBP & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar13 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      FUN_004029e0(unaff_EBX,unaff_EBP);
    }
    return unaff_EBX;
  }
  *(char *)(unaff_EDI + 0x8b004e84) = *(char *)(unaff_EDI + 0x8b004e84) + (char)((uint)pvVar7 >> 8);
  pbVar12 = (byte *)(unaff_ESI + -3);
  LOCK();
  bVar1 = *pbVar12;
  *pbVar12 = (byte)pvVar7;
  uVar9 = (undefined3)((uint)pvVar7 >> 8);
  pvVar7 = (void *)CONCAT31(uVar9,bVar1);
  UNLOCK();
  if (unaff_EDI < 0x80000000) {
    *(char *)(unaff_EBP + 0xec004e86) =
         *(char *)(unaff_EBP + 0xec004e86) + (char)((uint)param_2 >> 8) + (char)((uint)in_EAX >> 8);
    LOCK();
    bVar2 = *(byte *)(unaff_ESI + -4);
    *(byte *)(unaff_ESI + -4) = bVar1;
    iVar8 = CONCAT31(uVar9,bVar2);
    UNLOCK();
    pcVar14 = (char *)(iVar8 + 0x5a004e87);
    *pcVar14 = *pcVar14 + (char)param_2;
    LOCK();
    pvVar7 = *(void **)(unaff_ESI + -5);
    *(int *)(unaff_ESI + -5) = iVar8;
    UNLOCK();
    FUN_004e3660(pvVar7,param_3);
    pbVar12 = (byte *)FUN_004d43a0(param_3,(byte)*(undefined4 *)((int)pvVar7 + 0x10));
    return pbVar12;
  }
  pcVar4 = (code *)swi(4);
  if (SCARRY4(unaff_EDI,1)) {
    (*pcVar4)();
    pvVar7 = extraout_ECX;
  }
  FUN_004028f0(pvVar7,(char)unaff_retaddr);
  uVar6 = 0xffffffff;
  pcVar14 = s_STRUPR_005b76bc;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar3 = *pcVar14;
    pcVar14 = pcVar14 + 1;
  } while (cVar3 != '\0');
  FUN_00402940(pbVar12,(undefined4 *)s_STRUPR_005b76bc,~uVar6 - 1);
  return pbVar12;
}


