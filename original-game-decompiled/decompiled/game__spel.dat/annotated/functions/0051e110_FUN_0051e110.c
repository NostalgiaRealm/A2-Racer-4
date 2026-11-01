
/* ==== FUN_0051e110 @ 0051e110 ==== 
 * signature: void * __cdecl FUN_0051e110(uint param_1)
 * body: 0051e110-0051e2ac
 */

void * __cdecl FUN_0051e110(uint param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  void *pvVar4;
  size_t _Size;
  
  if (DAT_0074c760 < param_1) {
    if (DAT_0074c770 == 0) {
      FUN_00558953(DAT_0074c784,(byte *)s_qhull_internal_error__qh_memallo_005be42c);
      FUN_0051e8e0(5,(int *)0x0);
    }
    DAT_0074c794 = DAT_0074c794 + 1;
    DAT_0074c7a8 = DAT_0074c7a8 + param_1;
    DAT_0074c798 = DAT_0074c798 + 1;
    if (DAT_0074c7ac < DAT_0074c7a8) {
      DAT_0074c7ac = DAT_0074c7a8;
    }
    pvVar4 = _malloc(param_1);
    if (pvVar4 == (void *)0x0) {
      FUN_00558953(DAT_0074c784,(byte *)s_qhull_error__qh_memalloc___insuf_005be474);
      FUN_0051e8e0(4,(int *)0x0);
    }
    if (4 < DAT_0074c788) {
      FUN_00558953(DAT_0074c784,(byte *)s_qh_memalloc_long___d_bytes_at__p_005be408);
    }
    return pvVar4;
  }
  iVar1 = *(int *)(DAT_0074c770 + param_1 * 4) * 4;
  pvVar4 = *(void **)(iVar1 + DAT_0074c768);
  if (pvVar4 == (void *)0x0) {
    iVar1 = *(int *)(iVar1 + DAT_0074c76c);
    DAT_0074c790 = DAT_0074c790 + 1;
    if (DAT_0074c77c < iVar1) {
      _Size = DAT_0074c754;
      if (DAT_0074c774 != (int *)0x0) {
        _Size = DAT_0074c750;
      }
      DAT_0074c7a4 = DAT_0074c7a4 + _Size;
      piVar2 = _malloc(_Size);
      if (piVar2 == (int *)0x0) {
        FUN_00558953(DAT_0074c784,(byte *)s_qhull_error__qh_memalloc___insuf_005be474);
        FUN_0051e8e0(4,(int *)0x0);
      }
      *piVar2 = (int)DAT_0074c774;
      uVar3 = DAT_0074c764 + 4 & ~DAT_0074c764;
      DAT_0074c77c = _Size - uVar3;
      DAT_0074c778 = (void *)(uVar3 + (int)piVar2);
      DAT_0074c774 = piVar2;
    }
    pvVar4 = DAT_0074c778;
    DAT_0074c77c = DAT_0074c77c - iVar1;
    DAT_0074c778 = (void *)((int)DAT_0074c778 + iVar1);
    return pvVar4;
  }
  DAT_0074c78c = DAT_0074c78c + 1;
  *(undefined4 *)(iVar1 + DAT_0074c768) = **(undefined4 **)(iVar1 + DAT_0074c768);
  return pvVar4;
}


