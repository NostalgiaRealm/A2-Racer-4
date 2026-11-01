
/* ==== FUN_0043c885 @ 0043c885 ==== 
 * signature: undefined __stdcall FUN_0043c885(void)
 * body: 0043c885-0043caa4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043c885(void)

{
  undefined4 uVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  float local_18;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  DAT_006c4090 = DAT_00599c80;
  FUN_004390d0(1);
  iVar5 = DAT_006c3528;
  DAT_006c3ba8 = DAT_006c3568;
  if (*(int *)(DAT_00719b50 + 0x74 + (&DAT_006c3518)[DAT_006c3568] * 0x178) == 0) {
    fVar4 = 0.0;
    local_18 = 0.0;
    local_10 = 0.0;
  }
  else {
    pfVar2 = (float *)FUN_004b11c0((void *)(DAT_00719b50 + (&DAT_006c3518)[DAT_006c3568] * 0x178),
                                   &local_c);
    local_18 = *pfVar2;
    fVar4 = pfVar2[1];
    local_10 = pfVar2[2];
  }
  local_c = 0;
  local_8 = 0x41a00000;
  local_4 = 0;
  uVar1 = *(undefined4 *)(DAT_006fba58 * 0xf0 + 0x24 + DAT_00715e50);
  iVar5 = iVar5 * 0x178;
  FUN_004b1290((void *)(DAT_00719b50 + iVar5),uVar1,0,0x41a00000,0);
  FUN_004b1190((void *)(iVar5 + DAT_00719b50),uVar1,local_18,fVar4,local_10);
  _DAT_006c4074 = SQRT(local_18 * local_18 + local_10 * local_10);
  FUN_004a6800(0x7128b0);
  lVar6 = __ftol();
  DAT_006c4078 = (int)lVar6;
  _DAT_006c406c = (float)(int)(0x708 / (longlong)DAT_006c4078);
  iVar3 = DAT_006fba58 * 0xf0 + DAT_00715e50;
  if (*(int *)(iVar3 + 0x34) < *(int *)(iVar3 + 0x38)) {
    _DAT_006c406c = -_DAT_006c406c;
  }
  if (DAT_006fba64 < 0) {
    _DAT_006c406c = -_DAT_006c406c;
  }
  DAT_006c407c = 0;
  _DAT_006c4060 = 20.0 / (float)DAT_006c4078;
  FUN_004b1380((int *)(iVar5 + DAT_00719b50));
  FUN_0043c740();
  change_active_camera(4);
  DAT_006c4080 = 0;
  DAT_006c4084 = *(undefined4 *)(DAT_006fba58 * 0xf0 + 0x54 + DAT_00715e50);
  *(undefined4 *)(DAT_006fba58 * 0xf0 + 0x54 + DAT_00715e50) = 1;
  FUN_00448610(2,200,1);
  return;
}


