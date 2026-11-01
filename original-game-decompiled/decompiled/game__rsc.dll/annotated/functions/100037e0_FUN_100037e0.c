
/* ==== FUN_100037e0 @ 100037e0 ==== 
 * signature: int * __cdecl FUN_100037e0(uint param_1, uint param_2, int param_3, int param_4)
 * body: 100037e0-10003af2
 */

int * __cdecl FUN_100037e0(uint param_1,uint param_2,int param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  bVar2 = false;
  if ((((DAT_1002fce0 & 4) != 0) && (iVar4 = FUN_100048b0(), iVar4 == 0)) &&
     (iVar4 = FUN_10003050(2,0x1002c4cc,0x141,0,(byte *)"_CrtCheckMemory()"), iVar4 == 1)) {
    pcVar1 = (code *)swi(3);
    piVar5 = (int *)(*pcVar1)();
    return piVar5;
  }
  iVar4 = DAT_1002fce4;
  if (DAT_1002fce4 == DAT_1002fce8) {
    pcVar1 = (code *)swi(3);
    piVar5 = (int *)(*pcVar1)();
    return piVar5;
  }
  iVar6 = (*(code *)PTR_FUN_10030000)(1,0,param_1,param_2,DAT_1002fce4,param_3,param_4);
  if (iVar6 == 0) {
    if (param_3 == 0) {
      iVar4 = FUN_10003050(0,0,0,0,&DAT_1002c46c);
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        piVar5 = (int *)(*pcVar1)();
        return piVar5;
      }
    }
    else {
      iVar4 = FUN_10003050(0,0,0,0,(byte *)"Client hook allocation failure at file %hs line %d.\n");
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        piVar5 = (int *)(*pcVar1)();
        return piVar5;
      }
    }
    piVar5 = (int *)0x0;
  }
  else {
    if (((param_2 & 0xffff) != 2) && ((DAT_1002fce0 & 1) == 0)) {
      bVar2 = true;
    }
    if ((param_1 < 0xffffffe1) && (param_1 + 0x24 < 0xffffffe1)) {
      if (((((param_2 & 0xffff) != 4) && (param_2 != 1)) && ((param_2 & 0xffff) != 2)) &&
         ((param_2 != 3 && (iVar6 = FUN_10003050(1,0,0,0,&DAT_1002c46c), iVar6 == 1)))) {
        pcVar1 = (code *)swi(3);
        piVar5 = (int *)(*pcVar1)();
        return piVar5;
      }
      piVar5 = FUN_10009480((void *)(param_1 + 0x24),param_1 + 0x24);
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        DAT_1002fce4 = DAT_1002fce4 + 1;
        if (bVar2) {
          *piVar5 = 0;
          piVar5[1] = 0;
          piVar5[2] = 0;
          piVar5[3] = -0x1234544;
          piVar5[4] = param_1;
          piVar5[5] = 3;
          piVar5[6] = 0;
        }
        else {
          DAT_10031438 = DAT_10031438 + param_1;
          DAT_10031440 = DAT_10031440 + param_1;
          if (DAT_10031444 < DAT_10031440) {
            DAT_10031444 = DAT_10031440;
          }
          piVar3 = piVar5;
          if (DAT_1003143c != (int *)0x0) {
            DAT_1003143c[1] = (int)piVar5;
            piVar3 = DAT_10031434;
          }
          DAT_10031434 = piVar3;
          *piVar5 = (int)DAT_1003143c;
          piVar5[1] = 0;
          piVar5[2] = param_3;
          piVar5[3] = param_4;
          piVar5[4] = param_1;
          piVar5[5] = param_2;
          piVar5[6] = iVar4;
          DAT_1003143c = piVar5;
        }
        _memset(piVar5 + 7,(uint)DAT_1002fcec,4);
        _memset((void *)((int)piVar5 + param_1 + 0x20),(uint)DAT_1002fcec,4);
        _memset(piVar5 + 8,(uint)DAT_1002fcee,param_1);
        piVar5 = piVar5 + 8;
      }
    }
    else {
      iVar4 = FUN_10003050(1,0,0,0,(byte *)"Invalid allocation size: %u bytes.\n");
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        piVar5 = (int *)(*pcVar1)();
        return piVar5;
      }
      piVar5 = (int *)0x0;
    }
  }
  return piVar5;
}


