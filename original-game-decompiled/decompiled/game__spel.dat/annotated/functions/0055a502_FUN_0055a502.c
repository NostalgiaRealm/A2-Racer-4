
/* ==== FUN_0055a502 @ 0055a502 ==== 
 * signature: undefined4 __cdecl FUN_0055a502(FILE * param_1, int * param_2, uint param_3, uint param_4)
 * body: 0055a502-0055a5a2
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0055a502(FILE *param_1,int *param_2,uint param_3,uint param_4)

{
  uint _Size;
  undefined4 local_8;
  
  local_8 = 0;
  if ((param_3 == 4) ||
     (((1 < param_4 && (param_4 < 0x80000000)) && ((param_3 == 0 || (param_3 == 0x40)))))) {
    _Size = param_4 & 0xfffffffe;
    FUN_0055a5de((int *)param_1);
    __freebuf(param_1);
    *(ushort *)&param_1->_flag = (ushort)param_1->_flag & 0xc2f3;
    if ((param_3 & 4) == 0) {
      if (param_2 == (int *)0x0) {
        param_2 = _malloc(_Size);
        if (param_2 == (int *)0x0) {
          _DAT_0074dc5c = _DAT_0074dc5c + 1;
          return 0xffffffff;
        }
        *(ushort *)&param_1->_flag = (ushort)param_1->_flag | 0x408;
      }
      else {
        param_1->_flag = param_1->_flag | 0x500;
      }
    }
    else {
      param_1->_flag = param_1->_flag | 4;
      param_2 = &param_1->_charbuf;
      _Size = 2;
    }
    param_1->_cnt = 0;
    param_1->_bufsiz = _Size;
    param_1->_base = (char *)param_2;
    param_1->_ptr = (char *)param_2;
  }
  else {
    local_8 = 0xffffffff;
  }
  return local_8;
}


