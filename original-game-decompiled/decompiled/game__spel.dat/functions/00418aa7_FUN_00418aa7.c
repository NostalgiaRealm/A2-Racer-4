
/* ==== FUN_00418aa7 @ 00418aa7 ==== 
 * signature: int __stdcall FUN_00418aa7(void)
 * body: 00418aa7-00418cc6;00418cca-00418ea9
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00418cc7-00418cc9 00418eaa-00418eba
 */

int FUN_00418aa7(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  int unaff_EBP;
  char *pcVar4;
  bool bVar5;
  bool bVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  float in_stack_0000001c;
  float in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  float in_stack_00000038;
  float in_stack_0000003c;
  int in_stack_0000004c;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_0000006c;
  int in_stack_00000114;
  int in_stack_00000118;
  int in_stack_0000011c;
  float *in_stack_00000124;
  float *in_stack_00000128;
  
code_r0x00418aa7:
  iVar2 = in_stack_00000114;
  iVar1 = in_stack_00000030;
  bVar6 = -1 < in_stack_00000114;
  (&stack0x0000004c)[unaff_EBP * 2] = unaff_EBX;
  if (bVar6) {
    if (iVar2 < 0x13) {
      in_stack_00000034 =
           *(int *)(*(int *)((int)&DAT_005ce9e8 + in_stack_00000030) * 0xf0 + 0x34 + DAT_00715e50);
    }
    if (iVar2 < 6) {
      switch(*(undefined4 *)((int)&DAT_005ce9ec + in_stack_00000030)) {
      default:
switchD_00418b00_caseD_0:
        in_stack_00000014 = 1;
        in_stack_00000018 = 2;
        break;
      case 4:
      case 0x14:
      case 0x15:
        iVar2 = *(int *)(&DAT_005cea34 + in_stack_00000030) * 0xf0 + DAT_00715e50;
        iVar2 = FUN_00422b90(*(int *)(iVar2 + 0x34),*(int *)(iVar2 + 0x3c));
        iVar1 = FUN_00422b90(in_stack_00000034,
                             *(int *)(*(int *)((int)&DAT_005ce9e8 + iVar1) * 0xf0 + 0x3c +
                                     DAT_00715e50));
        if (iVar1 < iVar2) {
          in_stack_00000014 = 0;
          in_stack_00000018 = 1;
          in_stack_00000010 = 2;
          goto LAB_00418b98;
        }
        if (iVar1 <= iVar2) goto switchD_00418b00_caseD_0;
        in_stack_00000014 = 2;
        in_stack_00000018 = 1;
      }
      in_stack_00000010 = 0;
    }
  }
LAB_00418b98:
  iVar1 = in_stack_00000118;
  if ((&stack0x00000048)[unaff_EBP * 8] != '\0') {
LAB_00418be0:
    pcVar4 = &stack0x0000004a + unaff_EBP * 8;
    do {
      if (pcVar4[-1] == '\0') {
        iVar2 = FUN_004226f0(iVar1,unaff_EBX,in_stack_00000018);
        pcVar4[-1] = '\x01';
        iVar1 = in_stack_00000118;
        if ((-1 < iVar2) &&
           (iVar3 = FUN_00422ae0(iVar2,&DAT_005d2b48), iVar1 = in_stack_00000118, iVar3 == 0))
        goto LAB_00418c64;
      }
      if (*pcVar4 == '\0') {
        iVar2 = FUN_004226f0(iVar1,unaff_EBX,in_stack_00000010);
        *pcVar4 = '\x01';
        iVar1 = in_stack_00000118;
        if ((-1 < iVar2) &&
           (iVar3 = FUN_00422ae0(iVar2,&DAT_005d2b48), iVar1 = in_stack_00000118, iVar3 == 0))
        goto LAB_00418c64;
      }
      if (unaff_EBP == 0) {
        iVar2 = FUN_004226f0(iVar1,in_stack_0000004c,in_stack_00000014);
        if (((iVar2 < 0) &&
            (iVar2 = FUN_004226f0(iVar1,in_stack_0000004c,in_stack_00000018), iVar2 < 0)) &&
           (iVar2 = FUN_004226f0(iVar1,in_stack_0000004c,in_stack_00000010), iVar2 < 0)) {
          if (in_stack_0000004c < 1) {
                    /* WARNING: Subroutine does not return */
            FUN_004c4150((byte *)s_Invalid_waypoint___d_File___s_Li_00593750);
          }
        }
        else {
          FUN_00422ab0(iVar2,&stack0x00000038);
          iVar3 = FUN_004226f0(iVar1,iVar2,in_stack_00000014);
          bVar5 = iVar3 == 0;
          bVar6 = false;
          if (iVar3 < 0) {
            iVar3 = FUN_004226f0(iVar1,iVar2,in_stack_00000018);
            bVar5 = iVar3 == 0;
            bVar6 = false;
            if (iVar3 < 0) {
              iVar3 = FUN_004226f0(iVar1,iVar2,in_stack_00000010);
              bVar6 = iVar3 < 0;
              bVar5 = iVar3 == 0;
            }
          }
          in_stack_0000004c = iVar2;
          if (!bVar5 && !bVar6) {
            FUN_00422ab0(iVar3,&stack0x0000001c);
            in_stack_00000124[2] = in_stack_00000024;
            *in_stack_00000124 = in_stack_0000001c;
            FUN_00422b50(in_stack_0000002c,(undefined4 *)&stack0x00000044,&stack0x00000028);
            if (in_stack_00000028 == 1) {
              fVar7 = ((float10)*in_stack_00000124 - (float10)in_stack_00000038) *
                      (float10)0.46511626;
              fVar8 = ((float10)in_stack_00000124[1] - (float10)in_stack_0000003c) *
                      (float10)0.46511626;
              fVar9 = (float10)fcos((float10)1024.0);
              fVar10 = (float10)fsin((float10)1024.0);
              fVar11 = (fVar7 * fVar9 - fVar8 * fVar10) + (float10)*in_stack_00000124;
              *in_stack_00000124 = (float)fVar11;
              in_stack_00000124[2] =
                   (float)(fVar8 * fVar9 + fVar7 * fVar10 + (float10)in_stack_00000124[2]);
              *in_stack_00000128 = (float)fVar11;
              in_stack_00000128[2] = in_stack_00000124[2];
            }
            return iVar3;
          }
        }
        FUN_00422ab0(in_stack_0000004c,&stack0x0000001c);
        *in_stack_00000124 = in_stack_0000001c;
        in_stack_00000124[2] = in_stack_00000024;
        return -1;
      }
      unaff_EBX = *(int *)(pcVar4 + -6);
      unaff_EBP = unaff_EBP + -1;
      pcVar4 = pcVar4 + -8;
    } while( true );
  }
  iVar2 = FUN_004226f0(in_stack_00000118,unaff_EBX,in_stack_00000014);
  (&stack0x00000048)[unaff_EBP * 8] = 1;
  if ((iVar2 < 0) || (iVar3 = FUN_00422ae0(iVar2,&DAT_005d2b48), iVar3 != 0)) goto LAB_00418be0;
  unaff_EBP = unaff_EBP + 1;
  (&stack0x00000048)[unaff_EBP * 8] = 0;
  (&stack0x0000004a)[unaff_EBP * 8] = 0;
  (&stack0x00000049)[unaff_EBP * 8] = 0;
  goto LAB_00418c8e;
LAB_00418c64:
  unaff_EBP = unaff_EBP + 1;
  (&stack0x00000048)[unaff_EBP * 8] = 0;
  (&stack0x0000004a)[unaff_EBP * 8] = 0;
  (&stack0x00000049)[unaff_EBP * 8] = 0;
  (&stack0x0000004c)[unaff_EBP * 2] = iVar2;
LAB_00418c8e:
  unaff_EBX = iVar2;
  if (in_stack_0000011c <= unaff_EBP) {
    if (((-1 < in_stack_0000005c) && (-1 < in_stack_0000006c)) && (-1 < in_stack_00000054)) {
      FUN_00422ab0(in_stack_0000005c,&stack0x0000001c);
      *in_stack_00000124 = in_stack_0000001c;
      in_stack_00000124[2] = in_stack_00000024;
      FUN_00422ab0(in_stack_0000006c,&stack0x0000001c);
      *in_stack_00000128 = in_stack_0000001c;
      in_stack_00000128[2] = in_stack_00000024;
      return in_stack_00000054;
    }
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___d_Illegal_waypoint_in_Scan_0059379c);
  }
  goto code_r0x00418aa7;
}


