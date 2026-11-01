
/* ==== FUN_00452ba4 @ 00452ba4 ==== 
 * signature: undefined4 __cdecl FUN_00452ba4(int param_1, int param_2)
 * body: 00452ba4-00452e27
 */

undefined4 __cdecl FUN_00452ba4(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar5 = param_1 * 0xf0;
  pfVar3 = (float *)FUN_004066c0(local_18,-*(float *)(iVar5 + 0xbc + DAT_00715e50),
                                 -*(float *)(iVar5 + 0xc0 + DAT_00715e50),
                                 -*(float *)(iVar5 + 0xc4 + DAT_00715e50));
  pfVar4 = (float *)FUN_004066c0(local_c,*pfVar3 * 0.8,pfVar3[1] * 0.8,pfVar3[2] * 0.8);
  fVar1 = *pfVar4;
  pfVar3 = (float *)(iVar5 + 0xbc + DAT_00715e50);
  fVar2 = pfVar4[2];
  fVar7 = FUN_004a6800(0x7128b0);
  *pfVar3 = (float)(fVar7 * (float10)fVar1 + (float10)*pfVar3);
  pfVar3 = (float *)(iVar5 + 0xc4 + DAT_00715e50);
  fVar7 = FUN_004a6800(0x7128b0);
  *pfVar3 = (float)(fVar7 * (float10)fVar2 + (float10)*pfVar3);
  iVar6 = *(int *)(iVar5 + 0x24 + DAT_00715e50);
  *(float *)(DAT_0073b0d0 + iVar6 + 0x50 + iVar6 * 0xa8) =
       *(float *)(iVar5 + 0xbc + DAT_00715e50) +
       *(float *)(DAT_0073b0d0 + iVar6 + 0x50 + iVar6 * 0xa8);
  iVar6 = *(int *)(iVar5 + 0x24 + DAT_00715e50);
  *(float *)(DAT_0073b0d0 + iVar6 + 0x58 + iVar6 * 0xa8) =
       *(float *)(iVar5 + 0xc4 + DAT_00715e50) +
       *(float *)(DAT_0073b0d0 + iVar6 + 0x58 + iVar6 * 0xa8);
  *(float *)(iVar5 + 200 + DAT_00715e50) = *(float *)(iVar5 + 200 + DAT_00715e50) * 1.15;
  *(float *)(iVar5 + 0xd0 + DAT_00715e50) = *(float *)(iVar5 + 0xd0 + DAT_00715e50) * 1.15;
  FUN_004b5770(DAT_0073b0d0 + *(int *)(iVar5 + 0x24 + DAT_00715e50) * 0xa9);
  iVar6 = DAT_0073b0d0 + *(int *)(iVar5 + 0x24 + DAT_00715e50) * 0xa9;
  if ((((*(float *)(iVar6 + 0x74) <= (float)param_2) && (*(float *)(iVar6 + 0x7c) <= (float)param_2)
       ) && ((float)-param_2 <= *(float *)(iVar6 + 0x74))) &&
     ((float)-param_2 <= *(float *)(iVar6 + 0x7c))) {
    return 0;
  }
  *(undefined4 *)(iVar5 + 0x2c + DAT_00715e50) = 2;
  return 1;
}


