
/* ==== FUN_0045dbca @ 0045dbca ==== 
 * signature: undefined __fastcall FUN_0045dbca(int param_1, char * param_2)
 * body: 0045dbca-0045dbcb
 */

/* WARNING: Instruction at (ram,0x0045dbce) overlaps instruction at (ram,0x0045dbcd)
    */

void __fastcall FUN_0045dbca(int param_1,char *param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined4 in_EAX;
  undefined2 uVar5;
  undefined4 *puVar4;
  undefined4 *this;
  byte bVar6;
  char cVar7;
  char cVar9;
  int unaff_EBX;
  uint *unaff_EBP;
  int unaff_ESI;
  char *unaff_EDI;
  void *pvStack_8;
  code *pcStack_4;
  byte bVar3;
  char cVar8;
  
  do {
    out((short)param_2,(char)in_EAX);
    *unaff_EBP = *unaff_EBP << 1 | (uint)((int)*unaff_EBP < 0);
    while( true ) {
      bVar6 = (byte)param_1;
      *unaff_EBP = *unaff_EBP << (bVar6 & 0x1f) | *unaff_EBP >> 0x20 - (bVar6 & 0x1f);
      bVar3 = (byte)in_EAX;
      uVar5 = (undefined2)((uint)in_EAX >> 0x10);
      bVar2 = bVar3 % 0xd3;
      pcVar1 = (char *)(CONCAT31((int3)(CONCAT22(uVar5,CONCAT11(bVar3 / 0xd3,bVar3)) >> 8),bVar2) +
                       -0x72ffba2a);
      cVar7 = (char)((uint)unaff_EBX >> 8);
      *pcVar1 = *pcVar1 + cVar7;
      cVar9 = (char)unaff_EBX;
      unaff_EBX = CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(cVar7 * '\x02',cVar9));
      bVar2 = bVar2 % 0x45 + (bVar2 / 0x45) * 'E';
      in_EAX = CONCAT22(uVar5,(ushort)bVar2);
      *(char *)(unaff_ESI + -0x2b) = *(char *)(unaff_ESI + -0x2b) + bVar2;
      cVar8 = (char)param_2;
      cVar7 = cVar8 + bVar6;
      param_2 = (char *)CONCAT31((int3)((uint)param_2 >> 8),cVar7);
      if (!SCARRY1(cVar8,bVar6)) break;
      *param_2 = *param_2 + (char)((uint)param_1 >> 8);
      if (param_1 != 0) {
        pcVar1 = (char *)(param_1 + -0x25a8ffbb + unaff_EBX * 8);
        *pcVar1 = *pcVar1 + cVar9;
        *(char *)(unaff_EBP + -0x1c) = (char)unaff_EBP[-0x1c] + cVar7;
        this = DAT_00709980;
        in((short)param_2);
        pcStack_4 = FUN_0056a995;
        pvStack_8 = ExceptionList;
        ExceptionList = &pvStack_8;
        *(undefined1 **)((int)unaff_EBP + -0xb) = &stack0xffffffe4;
        *(undefined4 *)((int)unaff_EBP + 1) = 0;
        while (this != (undefined4 *)0x0) {
          cVar7 = FUN_0045ebf0(this,*(undefined4 *)((int)unaff_EBP + 0xd),
                               *(undefined4 *)((int)unaff_EBP + 0x45));
          if (cVar7 == '\0') {
            puVar4 = (undefined4 *)FUN_0045e8b0((int)this);
            DAT_00709980 = FUN_0045e780(this);
            this = puVar4;
          }
          else {
            this = (undefined4 *)FUN_0045e8b0((int)this);
          }
        }
        ExceptionList = *(void **)((int)unaff_EBP + -7);
        return;
      }
      unaff_EBP = unaff_EBP + 1;
      *unaff_EDI = *unaff_EDI + cVar7;
    }
    param_2 = param_2 + unaff_EBX;
    unaff_EBP = (uint *)((int)unaff_EBP + 3);
    unaff_EBX = CONCAT31((int3)((uint)unaff_EBX >> 8),cVar9 + bVar2);
  } while( true );
}


