
/* ==== FUN_10003be0 @ 10003be0 ==== 
 * signature: int * __cdecl FUN_10003be0(void * param_1, void * param_2, uint param_3, int param_4, int param_5, int param_6)
 * body: 10003be0-100040f0
 */

int * __cdecl
FUN_10003be0(void *param_1,void *param_2,uint param_3,int param_4,int param_5,int param_6)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  BOOL BVar6;
  bool bVar7;
  int *local_10;
  
  if (param_1 == (void *)0x0) {
    piVar2 = (int *)FUN_10003710(param_2,param_3,param_4,param_5);
  }
  else if ((param_6 == 0) || (param_2 != (void *)0x0)) {
    if (((DAT_1002fce0 & 4) != 0) &&
       ((iVar3 = FUN_100048b0(), iVar3 == 0 &&
        (iVar3 = FUN_10003050(2,0x1002c4cc,0x239,0,(byte *)"_CrtCheckMemory()"), iVar3 == 1)))) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
    iVar3 = DAT_1002fce4;
    if (DAT_1002fce4 == DAT_1002fce8) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
    iVar5 = (*(code *)PTR_FUN_10030000)(2,param_1,param_2,param_3,DAT_1002fce4,param_4,param_5);
    if (iVar5 == 0) {
      if (param_4 == 0) {
        iVar3 = FUN_10003050(0,0,0,0,&DAT_1002c46c);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
      }
      else {
        iVar3 = FUN_10003050(0,0,0,0,(byte *)
                                     "Client hook re-allocation failure at file %hs line %d.\n");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
      }
      piVar2 = (int *)0x0;
    }
    else if (param_2 < (void *)0xffffffdc) {
      if ((((param_3 != 1) && ((param_3 & 0xffff) != 4)) && ((param_3 & 0xffff) != 2)) &&
         (iVar5 = FUN_10003050(1,0,0,0,&DAT_1002c46c), iVar5 == 1)) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      BVar6 = FUN_10004d10((int)param_1);
      if ((BVar6 == 0) &&
         (iVar5 = FUN_10003050(2,0x1002c4cc,0x261,0,(byte *)"_CrtIsValidHeapPointer(pUserData)"),
         iVar5 == 1)) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      piVar4 = (int *)((int)param_1 + -0x20);
      bVar7 = *(int *)((int)param_1 + -0xc) == 3;
      if (bVar7) {
        if (((*(int *)((int)param_1 + -0x14) != -0x1234544) || (*(int *)((int)param_1 + -8) != 0))
           && (iVar5 = FUN_10003050(2,0x1002c4cc,0x26b,0,
                                    (byte *)
                                    "pOldBlock->nLine == IGNORE_LINE && pOldBlock->lRequest == IGNORE_REQ"
                                   ), iVar5 == 1)) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
      }
      else {
        if (((*(uint *)((int)param_1 + -0xc) & 0xffff) == 2) && ((param_3 & 0xffff) == 1)) {
          param_3 = 2;
        }
        if (((*(uint *)((int)param_1 + -0xc) & 0xffff) != (param_3 & 0xffff)) &&
           (iVar5 = FUN_10003050(2,0x1002c4cc,0x272,0,
                                 (byte *)"_BLOCK_TYPE(pOldBlock->nBlockUse)==_BLOCK_TYPE(nBlockUse)"
                                ), iVar5 == 1)) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
      }
      if (param_6 == 0) {
        local_10 = FUN_10009500(piVar4,(int)param_2 + 0x24);
        if (local_10 == (int *)0x0) {
          return (int *)0x0;
        }
      }
      else {
        local_10 = FUN_100095b0(piVar4,(void *)((int)param_2 + 0x24));
        if (local_10 == (int *)0x0) {
          return (int *)0x0;
        }
      }
      DAT_1002fce4 = DAT_1002fce4 + 1;
      if (!bVar7) {
        DAT_10031438 = (DAT_10031438 - local_10[4]) + (int)param_2;
        DAT_10031440 = (DAT_10031440 - local_10[4]) + (int)param_2;
        if (DAT_10031444 < DAT_10031440) {
          DAT_10031444 = DAT_10031440;
        }
      }
      piVar2 = local_10 + 8;
      if ((void *)local_10[4] < param_2) {
        _memset((void *)((int)piVar2 + local_10[4]),(uint)DAT_1002fcee,(int)param_2 - local_10[4]);
      }
      _memset((void *)((int)piVar2 + (int)param_2),(uint)DAT_1002fcec,4);
      if (!bVar7) {
        local_10[2] = param_4;
        local_10[3] = param_5;
        local_10[6] = iVar3;
      }
      local_10[4] = (int)param_2;
      if (((param_6 == 0) && (local_10 != piVar4)) &&
         (iVar3 = FUN_10003050(2,0x1002c4cc,0x2a8,0,
                               (byte *)"fRealloc || (!fRealloc && pNewBlock == pOldBlock)"),
         iVar3 == 1)) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      if ((local_10 != piVar4) && (!bVar7)) {
        if (*local_10 == 0) {
          if ((DAT_10031434 != piVar4) &&
             (iVar3 = FUN_10003050(2,0x1002c4cc,0x2b7,0,(byte *)"_pLastBlock == pOldBlock"),
             iVar3 == 1)) {
            pcVar1 = (code *)swi(3);
            piVar4 = (int *)(*pcVar1)();
            return piVar4;
          }
          DAT_10031434 = (int *)local_10[1];
        }
        else {
          *(int *)(*local_10 + 4) = local_10[1];
        }
        if (local_10[1] == 0) {
          if ((DAT_1003143c != piVar4) &&
             (iVar3 = FUN_10003050(2,0x1002c4cc,0x2c2,0,(byte *)"_pFirstBlock == pOldBlock"),
             iVar3 == 1)) {
            pcVar1 = (code *)swi(3);
            piVar4 = (int *)(*pcVar1)();
            return piVar4;
          }
          DAT_1003143c = (int *)*local_10;
        }
        else {
          *(int *)local_10[1] = *local_10;
        }
        if (DAT_1003143c == (int *)0x0) {
          DAT_10031434 = local_10;
        }
        else {
          DAT_1003143c[1] = (int)local_10;
        }
        *local_10 = (int)DAT_1003143c;
        local_10[1] = 0;
        DAT_1003143c = local_10;
      }
    }
    else {
      iVar3 = FUN_10003050(1,0,0,0,(byte *)"Allocation too large or negative: %u bytes.\n");
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      piVar2 = (int *)0x0;
    }
  }
  else {
    FUN_100041a0(param_1,param_3);
    piVar2 = (int *)0x0;
  }
  return piVar2;
}


