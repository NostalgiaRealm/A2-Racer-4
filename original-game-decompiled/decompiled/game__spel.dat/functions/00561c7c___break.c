
/* ==== __break @ 00561c7c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00561c7c-00561c7c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


