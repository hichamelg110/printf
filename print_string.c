else if (*format == 's')
{
char *str = va_arg(countargs, char*);
i += print_string(str);
}
else if (*format == '%')
{
putchar('%');
}
}
else
{
putchar(*format);
i++;
}
}
va_end(countargs);
return (i);
}


