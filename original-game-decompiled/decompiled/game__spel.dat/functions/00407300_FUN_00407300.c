
/* ==== FUN_00407300 @ 00407300 ==== 
 * signature: undefined4 __cdecl FUN_00407300(int param_1)
 * body: 00407300-004074b1
 */

undefined4 __cdecl FUN_00407300(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  
  iVar1 = FUN_0040dad0(param_1);
  iVar4 = param_1 * 0xf0;
  *(uint *)(iVar4 + 0x1c + DAT_00715e50) = *(uint *)(iVar4 + 0x1c + DAT_00715e50) | 2;
  *(code **)(iVar4 + 0x70 + DAT_00715e50) = FUN_0042d820;
  iVar2 = FUN_0040dad0(param_1);
  if (iVar2 == -1) {
    if (DAT_005d3110 == '\0') {
      FUN_00412e20(param_1);
      FUN_00427ae0(param_1);
      FUN_00436dc0(param_1,0);
    }
  }
  else if (DAT_005d3110 == '\0') {
    uVar3 = FUN_00419450(param_1);
    if ((char)uVar3 == '\x01') {
      fVar5 = FUN_004a6800(0x7128b0);
      *(float *)(&DAT_005ceab0 + iVar1 * 0x294) =
           (float)(fVar5 + (float10)*(float *)(&DAT_005ceab0 + iVar1 * 0x294));
    }
    else {
      *(undefined4 *)(&DAT_005ceab0 + iVar1 * 0x294) = 0;
    }
    if (0.25 < *(float *)(&DAT_005ceab0 + iVar1 * 0x294)) {
      FUN_004c3fa0((byte *)s_A_cop_has_been_corrected__005904d4);
      FUN_0040e5a0(param_1,*(undefined4 **)(iVar4 + 0x34 + DAT_00715e50),'\0');
    }
    FUN_0040d490(iVar1);
    FUN_00412570(iVar1);
    FUN_00436dc0(param_1,(&DAT_005ce9ec)[iVar1 * 0xa5] != 0x19);
  }
  if (DAT_005d3110 == '\x01') {
    iVar1 = iVar4 + DAT_00715e50;
    fVar5 = FUN_004a6800(0x7128b0);
    *(float *)(iVar1 + 0xc4) =
         (float)((float10)*(float *)(iVar1 + 0xc4) -
                fVar5 * (float10)*(float *)(iVar1 + 0xc4) * (float10)5.0);
    iVar1 = iVar4 + DAT_00715e50;
    fVar5 = FUN_004a6800(0x7128b0);
    *(float *)(iVar1 + 0xbc) =
         (float)((float10)*(float *)(iVar1 + 0xbc) -
                fVar5 * (float10)*(float *)(iVar1 + 0xbc) * (float10)5.0);
    iVar4 = iVar4 + DAT_00715e50;
    fVar5 = FUN_004a6800(0x7128b0);
    *(float *)(iVar4 + 0xcc) =
         (float)((float10)*(float *)(iVar4 + 0xcc) -
                fVar5 * (float10)*(float *)(iVar4 + 0xcc) * (float10)5.0);
  }
  FUN_00435470(param_1,0);
  return 0;
}


