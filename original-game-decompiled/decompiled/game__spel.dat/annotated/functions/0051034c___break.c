
/* ==== __break @ 0051034c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0051034c-0051034c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


