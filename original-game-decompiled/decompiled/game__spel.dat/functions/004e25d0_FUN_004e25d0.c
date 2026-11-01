
/* ==== FUN_004e25d0 @ 004e25d0 ==== 
 * signature: int __thiscall FUN_004e25d0(void * this, int param_1)
 * body: 004e25d0-004e2610
 */

int __thiscall FUN_004e25d0(void *this,int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  sVar1 = *(short *)this;
  if (sVar1 == 0xff) {
    return 0;
  }
joined_r0x004e25f2:
  sVar1 = sVar1 + -1;
  if (sVar1 < 0) {
    return param_1;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0x43) {
                    /* WARNING: Could not recover jumptable at 0x004e260a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (*(code *)(&PTR_FUN_004e2720)[*(int *)((int)this + sVar1 * 4 + 4) + -0x36])();
    return iVar2;
  }
  uVar3 = FUN_004d4020(iVar2);
  if ((char)uVar3 == '\0') goto LAB_004e26a9;
  iVar2 = (int)sVar1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((&DAT_004e272f)[*(int *)((int)this + iVar2 * 4 + 4)]) {
  case 0:
    goto switchD_004e268b_caseD_0;
  case 1:
    uVar4 = (uint)*(short *)((int)this + iVar2 * 2 + 0x18);
    iVar2 = param_1 + 0x44;
    break;
  case 2:
    uVar4 = (uint)*(short *)((int)this + iVar2 * 2 + 0x18);
    iVar2 = param_1 + 0x80;
  }
  goto LAB_004e26cf;
LAB_004e26a9:
  if (iVar2 != 0x42) goto joined_r0x004e25f2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((&DAT_004e274a)[*(int *)((int)this + sVar1 * 4 + 4)]) {
  case 0:
switchD_004e268b_caseD_0:
    uVar4 = (uint)*(short *)((int)this + sVar1 * 2 + 0x18);
    iVar2 = param_1 + 0x2c;
LAB_004e26cf:
    if ((*(int *)(iVar2 + 4) != 0) &&
       (uVar4 < (uint)(*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 2))) goto LAB_004e2706;
    break;
  case 1:
    uVar4 = (uint)*(short *)((int)this + sVar1 * 2 + 0x18);
    iVar2 = param_1 + 0x40;
    if ((*(int *)(param_1 + 0x44) != 0) &&
       (uVar4 < (uint)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44) >> 2)))
    goto LAB_004e2706;
  }
  FUN_004e2790();
LAB_004e2706:
  param_1 = *(int *)(*(int *)(iVar2 + 4) + uVar4 * 4);
  goto joined_r0x004e25f2;
}


